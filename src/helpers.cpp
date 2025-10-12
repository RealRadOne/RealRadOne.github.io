#include<string>
using namespace std;

char getLower(char c){
    if (c >= 'A' && c <='Z')
        return c-('Z'-'z');
    return c;
}

// Function to convert text to a clean, lowercase, URL-friendly ID
string toLowerCase(string text){
    string newtext="";
    for(unsigned int i=0;i<text.size();i++){
        if (text[i]=='\0')
            break;
        
        char current = text[i];
        
        if (current==' '){
            // Convert spaces to underscores
            newtext+='_';
        }
        else if( (current>='A' && current<='Z' ) || (current>='a' && current<='z') ){
            // Append lowercase alphabets
            newtext+=getLower(current);
        }
        else if( current>='0' && current<='9'){
            // Append digits
            newtext+=current;
        }
        // NOTE: Other punctuation is deliberately ignored to keep the ID clean.
    }
    return newtext;        
}