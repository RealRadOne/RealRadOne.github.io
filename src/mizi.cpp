#include "helpers.cpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm> // Needed for std::find_if if parsing logic is complex

using namespace std;

// --- Data Structure for Table of Contents ---
struct TocEntry{
  int level;
  string text;
  string id; 
};

struct Config {
  string shortcut_icon;
  string icon;
  string name;
  string description;
  string twitter_creator;
  string header;
  string footer;
};

Config *configParser() {
  Config *conf = new Config;
  ifstream configFile("config.txt");
  if (configFile.is_open()) {
    string line;
    while (getline(configFile, line)) {
      istringstream is_line(line);
      string key;
      if (getline(is_line, key, '=')) {
        string value;
        if (getline(is_line, value)) {
          if (key == "shortcut_icon") {
            conf->shortcut_icon = value;
          } else if (key == "icon") {
            conf->icon = value;
          } else if (key == "name") {
            conf->name = value;
          } else if (key == "description") {
            conf->description = value;
          } else if (key == "creator") {
            conf->twitter_creator = value;
          } else if (key == "header") {
            conf->header = value;
          } else if (key == "footer") {
            conf->footer = value;
          } else {
            cout << "Config file syntax error." << endl;
          }
        }
      }
    }
  }
  configFile.close();
  return conf;
}

Config *conf;

// --- UPDATED: Added link for terminal font and local style.css ---
string html_head(string text) {
  return "<!DOCTYPE html><html lang='en'><head>"
         // Terminal font (Fira Code) link
         "<link href='https://fonts.googleapis.com/css2?family=Fira+Code:wght@400;700&display=swap' rel='stylesheet'>"
         // Link to the custom style.css 
         "<link rel='stylesheet' type='text/css' href='../style.css'>" 
         
         // Original Metadata
         "<link rel='shortcut icon' href='" + conf->shortcut_icon + "' type='image/x-icon'>"
         "<link rel='icon' href='" + conf->icon + "' type='image/x-icon'>"
         "<meta charset='utf-8'>"
         "<meta name='description' content='" + conf->description + "'>"
         "<meta name='viewport' content='width=device-width, initial-scale=1.0'>"
         "<meta name='twitter:card' content='summary'>"
         "<meta name='twitter:site' content='" + conf->name + "'>"
         "<meta name='twitter:title' content='" + conf->name + "'>"
         "<meta name='twitter:description' content='" + conf->description + "'>"
         "<meta name='twitter:creator' content='@" + conf->twitter_creator + "'>"
         "<meta name='twitter:image' content='" + conf->icon + "'>"
         "<meta property='og:title' content='" + conf->name + "'>"
         "<meta property='og:site_name' content='" + conf->name + "'>"
         "<title> " + conf->name + " - " + text +
         "</title>"
         // Added optional smooth scrolling
         "<style>html { scroll-behavior: smooth; }</style>" 
         
         "</head><body class='" + text + "'>";
}
string html_header = "";
string html_footer = "";

struct Page {
  string title;
  int partsCount;
  string partName[32];
  string partDesc[32];
  string tags[16];
};

Page *createPage(string title) {
  Page *newpage = new Page;
  newpage->title = title;
  newpage->partsCount = 0;
  return newpage;
}

void addPart(Page *page, string name) {
  page->partName[page->partsCount] = name;
  page->partsCount++;
}

struct Category {
  string name;
  int pageCount;
  Page *pages[32];
};

struct Category *Categories[32];
struct Page *SeparatePages[20];

Category *createCategory(string name, int count) {
  Category *newCategory = new Category;
  newCategory->name = name;
  newCategory->pageCount = 0;
  Categories[count] = newCategory;
  return newCategory;
}
void addPage(Category *category, Page *page) {
  category->pages[category->pageCount] = page;
  category->pageCount++;
}

// Debug
void printContent(Category *cats[], int count) {
  for (int i = 0; i <= count; i++) {
    Category tempCat = *cats[i];
    cout << tempCat.name << endl;

    for (int pageno = 0; pageno < tempCat.pageCount; pageno++) {
      Page tempPage = *tempCat.pages[pageno];
      cout << "\t |" << tempPage.title << endl;

      for (int partno = 0; partno < tempPage.partsCount; partno++) {
        cout << "\t\t |" << tempPage.partName[partno] << endl;
        cout << "\t\t |" << tempPage.partDesc[partno] << endl;
      }
    }
  }
}

// Prints errorline
void printError(int linenumber, string text) {
  cout << "Error at line " << linenumber << ". " << text << endl;
}

//  [urlText](url) ->  <a href='url'>urlText</a>
// ![altText](image) -> <img src='' alt=''>
string parseLinks(string text, string path) {
  string label = text;
  unsigned int index = 0;
  string newText = "";
  string urlText = "";
  string url = "";
  bool isImage = false;
  bool isTag = false;

  for (; index < text.size();) {

    // If tag
    if (isTag == true) {
      string tag = "";
      while (text[index] != '}' && index < text.size()) {
        tag += text[index];
        index += 1;
      }
      index += 2; // Increment index to new text;

      string filename = toLowerCase(tag);
      string filepath = path + filename + ".html";
      newText += "<a class='tag' href='" + filepath + "'>{{" + tag + "}}</a>";
      isTag = false;
      continue;
    }
    // Check if tag
    if (text[index] == '{' && text[index + 1] == '{') {
      isTag = true;
      index += 2;
      continue;
    }
    // Enter into linking
    // ![ -> image flag true
    if (text[index] == '!' && text[index + 1] == '[') {
      isImage = true;
      index++;
      continue;

      //
    } else if (text[index] == '[') {

      // Crude implementation for images
      if (index >= 1 && text[index - 1] == '!') {
        isImage = true;
      } else {
        isImage = false;
      }

      index++;
      // Loop through urltext
      while (index < text.size() && text[index] != ']') {

        // Broken [text [text](link) case
        if (text[index] == '[') {
          newText += '[' + urlText;
          urlText = "";
          index++;
        }

        urlText += text[index];
        index++;
      }

      // EndofUrlText
      // [urltext]
      if (text[index] == ']' && index < text.size()) {
        index++;
        if (text[index] == '(' && index < text.size()) {
          index++;
          // Continue
          while (index < text.size() && text[index] != ')') {

            // Error [link](abc.com [link](abc.com)
            if (text[index] == '[') {
              newText += '[' + urlText + "](" + url;
              urlText = "";
              break;
            }
            url += text[index];
            index++;
          }

          // Complete parsing
          if (text[index] == ')' && index < text.size()) {

            if (isImage) {
              index++;
              // Added class 'thumbnail' for custom styling
              newText += "<img class='thumbnail' src='" + url + "' alt='" + urlText + "'>";
            } else {
              index++;
              newText += " <a href='" + url + "'>" + urlText + "</a>";
            }
            url = "";
            urlText = "";
            isImage = false;
            continue;
          }

          if (index == text.size()) {
            newText += '[' + urlText + "](" + url;
            continue;
          }
        } else {
          newText += '[' + urlText + ']';
          urlText = "";
          continue;
        }
      } else {
        newText += '[' + urlText;
        urlText = "";
        continue;
      }
    } else {
      newText += text[index];
      index++;
    }
  }
  return newText;
}

// --- UPDATED: Added vector to collect all TOC entries ---
vector<TocEntry> all_toc_entries;

Category **createCategories(int *categoryCount, string filename, string path) {

  string line;
  int lineNo = 0;

  // --- FIX for uninitialized variable warning: Initialize currentCategory immediately ---
  // Category for separate pages is always created first
  Category *seperateCategory = createCategory("SeperatePages", 0);
  
  // Initialize currentCategory to the safe, default category pointer.
  // This ensures it is never an uninitialized pointer when checked later (e.g., hashcount == 2).
  Category *currentCategory = seperateCategory;
  // --- END FIX ---

  Page *currentPage = NULL;
  bool uList = false;
  string currentPartName = "";
  string currentPartDesc = "";

  ifstream mdFile(filename);

  if (mdFile.is_open()) {
    while (getline(mdFile, line)) {
      lineNo++;
      int hashcount = 0;
      int i = 0;

      if (line == " ") {
        currentPartDesc += "<br>";
        continue;
      }

      // Check for headings *before* parsing links to get clean heading text
      string trimmed_line = line;
      
      // Removing unwanted spaces
      while (trimmed_line[i] == ' ') {
        i++;
      }
      
      // Headings
      if (trimmed_line[i] == '#') {
        while (trimmed_line[i] == '#') {
          hashcount++;
          i++;
        }
        
        // Remove trailing spaces before extracting heading text
        size_t start = trimmed_line.find_first_not_of(" \t", i);
        size_t end = trimmed_line.find_last_not_of(" \t");
        string heading_text = (start == string::npos) ? "" : trimmed_line.substr(start, end - start + 1);
        
        // --- TOC GENERATION LOGIC ---
        // Collect ALL H1, H2, H3 for the site-wide TOC
        if (hashcount >= 1 && hashcount <= 3) {
            TocEntry new_entry;
            new_entry.level = hashcount;
            new_entry.text = heading_text;
            new_entry.id = toLowerCase(heading_text);
            all_toc_entries.push_back(new_entry);
        }
        // --- END TOC GENERATION LOGIC ---
        
        line = parseLinks(line, path); // Now parse links for final HTML

        // Category
        if (hashcount == 1) {
          (*categoryCount)++; // Categories stored from 1 onwards ,
                              // categories[0] for separate pages
          currentCategory = createCategory(heading_text, *categoryCount);
          uList = false;
        }

        // Page
        else if (hashcount == 2) {
          if (currentCategory->name.empty()) {
            printError(lineNo, "No Category assigned!");
            return 0;
          }
          currentPage = createPage(heading_text);
          addPage(currentCategory, currentPage);
          uList = false;
        }

        // Part
        else if (hashcount == 3) {
          if (currentCategory->name.empty()) {
            printError(lineNo, "No Category assigned!");
            return 0;
          }
          if (currentPage->title.empty()) {
            printError(lineNo, "No Page assigned!");
            return 0;
          }
          // Current Part Name
          currentPartName = heading_text;
          addPart(currentPage, currentPartName);
          currentPartDesc = "<p>";
          uList = false;
        }

      } else if (trimmed_line[i] == '$' && trimmed_line[i + 1] == '$' && trimmed_line[i + 2] == '$') {
        // Seperate page
        currentCategory = seperateCategory;
        uList = false;
        continue;
      }
      
      // If not a heading, process as content
      else { 
        line = parseLinks(line, path); // Parse links for regular lines
        
        // No headings: Plaintext
        // Error
        if (currentPartName == "" || currentPage->title.empty()) {
          printError(lineNo, "No Part assigned!");
          return 0;
        }

        // Ul
        if (line[i] == '-') {
          // Remove leading spaces/hyphen for li content
          size_t content_start = line.find_first_not_of(" \t-", i);
          string li_content = (content_start != string::npos) ? line.substr(content_start) : "";

          // If not in a ul
          if (uList == false) {
            currentPartDesc += "<ul>";
            uList = true;
          }

          currentPartDesc += "<li>";
          currentPartDesc += li_content;
          currentPartDesc += "</li>";

        } else { // If list doesn't continue
          if (uList == true) {
            uList = false;
            currentPartDesc += "</ul>";
          }
          // This assumes the content has already been processed by parseLinks
          currentPartDesc += "<p>" + line + "</p>";
        }

        // For <ul> continuing to next part of the page, Every 'part name' has
        // an extra </ul> to keep a check. Refer to build page function

        // Update if page exists, add to current part i.e. (partsCount - 1)
        if (currentPage->title != "")
          currentPage->partDesc[(currentPage->partsCount) - 1] =
              currentPartDesc;
      }
    }
    mdFile.close();
  } else {
    cout << "Unable to open file" << endl;
  }
  return Categories;
}

void buildHome(Category *categories[], int categories_length, string path) {
  ofstream htmlHome;
  htmlHome.open(path + "/home.html");
  htmlHome << html_head("Home");
  htmlHome << html_header;
  
  // --- TOC SIDEBAR FOR HOME PAGE ---
  htmlHome << "<div id='sidebar'>\n";
  htmlHome << "    <h2>Table of Contents</h2>\n";
  htmlHome << "    <ul>\n";
  
  for (const auto& entry : all_toc_entries) {
      string li_class = "level-" + to_string(entry.level);
      htmlHome << "        <li class=\"" << li_class << "\">";
      // Links jump to the ID on the current home page
      htmlHome << "<a href=\"#" << entry.id << "\">" << entry.text << "</a>";
      htmlHome << "</li>\n";
  }
  htmlHome << "    </ul>\n";
  htmlHome << "</div>\n";
  // --- END TOC SIDEBAR ---
  
  // --- MAIN CONTENT CONTAINER ---
  htmlHome << "<div id='content'>";
  htmlHome << "<main class='home'>";

  for (int i = 1; i <= categories_length; i++) {
    Category *category = categories[i];
    
    // Add ID to H2 for linking from TOC
    string category_id = toLowerCase(category->name);
    htmlHome << "<h2 id='" << category_id << "'>" << category->name << "</h2>";
    
    htmlHome << "<ul>";
    for (int j = 0; j < category->pageCount; j++) {
      Page *page = category->pages[j];
      string page_name = page->title;
      string page_index = toLowerCase(page_name);
      htmlHome << "<li><a href='" << page_index << ".html'>" << page_name
               << "</a></li>";
    }

    htmlHome << "</ul>";
  }
  htmlHome << "<hr/>";
  htmlHome << "</main>";
  htmlHome << "</div>"; // Close #content
  htmlHome << html_footer;
  htmlHome.close();
}

// Helper to generate the main page content with proper IDs
void generate_page_content(ofstream& htmlPage, Page *page) {
  
  // H1 already has ID from TOC parsing (H1 is the page title)
  string page_id = toLowerCase(page->title);
  htmlPage << "<h1 id='" << page_id << "'>" << page->title << "</h1>";

  // Existing jump list (optional, as we have the fixed sidebar)
  if (page->partsCount >= 3) {
    htmlPage << "<ul class='jump'>";
    for (int i = 0; i < page->partsCount; i++) {
      string part_name = page->partName[i];
      string part_index = toLowerCase(part_name);
      htmlPage << "<li><a href='#" << part_index << "'>" << part_name
               << "</a></li>";
    }
    htmlPage << "</ul>";
  }

  for (int i = 0; i < page->partsCount; i++) {
    string part_name = page->partName[i];
    string part_desc = page->partDesc[i];
    string part_index = toLowerCase(part_name);
    
    // H3 headings (which were H3 in the MD)
    // Extra </ul> to keep a check on overflowing <ul>
    htmlPage << "</ul><h3 id='" << part_index << "'>" << part_name 
             << "</h3>"; 
    htmlPage << part_desc;
  }

  htmlPage << "<hr/>";
}

void buildPage(Page *page, string path) {
  ofstream htmlPage;
  string filename = toLowerCase(page->title);
  string filepath = path + filename + ".html";
  htmlPage.open(filepath.c_str());
  htmlPage << html_head(page->title);
  htmlPage << html_header;
  
  // --- TOC SIDEBAR GENERATION ---
  htmlPage << "<div id='sidebar'>\n";
  htmlPage << "    <h2>Table of Contents</h2>\n";
  htmlPage << "    <ul>\n";
  
  for (const auto& entry : all_toc_entries) {
      string li_class = "level-" + to_string(entry.level);
      htmlPage << "        <li class=\"" << li_class << "\">";
      // Links jump to the ID on the current page
      htmlPage << "<a href=\"#" << entry.id << "\">" << entry.text << "</a>";
      htmlPage << "</li>\n";
  }
  htmlPage << "    </ul>\n";
  htmlPage << "</div>\n";
  // --- END TOC SIDEBAR ---
  
  // --- MAIN CONTENT CONTAINER ---
  htmlPage << "<div id='content'>";
  htmlPage << "<main class='page'>";
  
  generate_page_content(htmlPage, page); // Call new helper
  
  htmlPage << "</main>";
  htmlPage << "</div>"; // Close #content
  
  htmlPage << html_footer;
  htmlPage.close();
}

void createSite(string filename, string path) {
  Category **cats;
  int categoryCount = 0;
  
  // Initialize config
  conf = configParser();
  html_header = "<header>" + conf->header + "</header>";
  // Adjusted footer to close the <body> and <html> tags properly
  html_footer = "<footer><p>" + conf->footer + "</p></footer></body></html>";
  
  // 1. First Pass: Create categories/pages AND collect all TOC entries
  cats = createCategories(&categoryCount, filename, path);
  cout << "Categories found: " << categoryCount << endl;

  // Debug categories
  // printContent(cats,categoryCount);

  // 2. Second Pass: Build all pages using the collected TOC data
  buildHome(cats, categoryCount, path);
  for (int i = 0; i <= categoryCount;
       i++) { // Build all pages including seperate pages
    Category tempCat = *cats[i];

    for (int pageno = 0; pageno < tempCat.pageCount; pageno++) {
      Page *tempPage = tempCat.pages[pageno];
      buildPage(tempPage, path);
    }
  }
}