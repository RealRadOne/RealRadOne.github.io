# Home
## About
### An Introduction
Hey there, I am Sakshi.<br>
In the 25 years of my current existence, one thing that has stayed true to me is working with challenging problems. Be it my undergrad, the oil and gas sector or the finance sector, or my grad school. Yep! After 3 years of spending my time in the industry I decided to return back to grad school to learn more about computers, maths and LIFE! 
Growing up I travelled across India and now I study in the beautiful town of Stony Brook near New York.Born to parents who adored literature, politics and economics in their own rights.I embrace my identity as a proud nationalist Indian coming from humble Bihar. This is my digital garden on second brain where I aim to make Computer Science fun and maybe informative.
<p> <img class='thumbnail' style='width:200px' src='https://i.ibb.co/86mkYtd/20190413-063202.jpg'> </p><p>
</p>

### Professional Life 
- June 2020: Graduated from VIT Chennai with a B.Tech in CS.
- Aug 2020-Jul 2022: Was a Software Engineer for ExxonMobil.   
- Aug 2022-Aug 2023: Was a Software Engineer for Societe Generale.
- Aug 2023-Jul 2025: Studied MS CS at SUNY, Stony Brook. 
- May 2024-Aug 2024: Was a Cloud R&D intern at Commvault.
- Aug 2025: DAG of DAG's accepted to SIGMOD 2026 co-authored with Heena Nagda, Md. Amiri, Boon Thau Loo!
- Aug 2025: Joined Infosys.

### Current Endaveour
I am lost. So, I work on AI solutions in Infosys and on weekends and between my job I try to learn CUDA, Computer Architecture and OS. I am currently splitting my time between reading ML books and CUDA.

## Articles
### Deadly Designs
### About The Series
In a bid to organize my code more I landed on to design principles and structural patterns. I talk about these in my Medium Articles which I have linked down below:

### Part-1
- [An Introduction](https://medium.com/@sakshisinha.2016/deadly-designs-3056a67aa619)

### Part-2
- [Shady Singletons](https://medium.com/@sakshisinha.2016/deadly-designs-ac99f35c20f1)

### Part-3 
- [Flabbergasting Factories](https://medium.com/@sakshisinha.2016/deadly-designs-131e23cda09f)

### Part-4 
- [Problematic Prototypes](https://medium.com/@sakshisinha.2016/deadly-designs-8ef6d6f88835)

### Part-5 
- [Bugging Builders](https://medium.com/@sakshisinha.2016/deadly-designs-d02e04c20300)

## Everything Computers!

### Data Structures
### Data Structure Resources
- [Dynamic Programming Patterns](https://leetcode.com/discuss/general-discussion/458695/dynamic-programming-patterns)
- [How plagiarized is your code?](https://www.codequiry.com/)
- [A complete resource of everything](https://docs.google.com/document/d/1VNoEUzBtyCw0fDw0X_bvuhmCwz1qhNjETPJc5VRZqm8/edit#)

## Interview Prep
### Interview Prep Resources
- [6 mistakes not to make on the resume](https://www.cnbc.com/2019/04/22/want-to-be-irresistible-to-hiring-managers-avoid-these-6-resume-mistakes-at-all-costs.html)
- [How to Ace Coding Interviews](https://medium.com/better-programming/how-to-ace-the-coding-interview-by-an-ex-facebook-interviewer-9c163a845d05)
- [How to stay relevant](https://levelup.gitconnected.com/how-to-stay-relevant-and-get-tech-companies-to-beg-you-to-work-for-them-2e3ea445454f)

## System Design
### System Design Resources
- [Tian Pan's Blogs](https://tianpan.co/notes/2016-02-13-crack-the-system-design-interview)

## Docker
### Installation On Windows
Note: I would never recommend trying docker on windows.You might doubt your existence and feel like pulling all the hair from your head.<br>
Note:Ubuntu WSL is not sufficient to run docker.Shall not be considered a substitute.
### For Windows Home:
-1 : As Docker is only available for Windows enterprise edition
-2 : After Installing docker
-3 : Edit Windows Version in Registry<br>
-4 : Press Windows + R and write regedit<br>
-5 : In the Registry Editor, go to \HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion<br>
-6 : Right-click on EditionID and Click Modify<br>
-7 : Change Value Data to "Professional"<br>
-8 : Press OK
- Install Docker Desktop
- After the installation, you can change the EditionID back to "Core"
- After this install docker toolbox
- Ensure that nothing like Hyper-V or Windows Virtualization platform is Running
- : [Check this thread](https://github.com/docker/toolbox/issues/745)
### Commands
- To start : net start com.docker.service
- docker ps -a : List all the containers
- docker run : Run an image.If it does not exist it will be pulled from docker-hub
- docker stop ID : Stop a running container
- docker rm ID(First few letters will do) : Remove a container permanently
- docker images : List of images on System
- docker rmi : Remove an image
- docker pull : Pull the image
- Ports 1024-49151: Registered Ports,used for lots of other network services
### FireWalls
- A device that blocks traffic which meets certain crtiteria
- Can function on multiple layers of network
- How do they work?
- Can perform inspection of application layer traffic
- Can block ranges of IP Addresses
- Only sometimes are they independent network devices.For most of the networks firewall performs the function of router+firewall

## Dev Kid's Basics 

### About Git
- A developer's essential
- Resources to get you going
- [Oh shit,git!](https://ohshitgit.com/)

### About Vim
- Superpowers that can make you forget Sublime and Atom

### ShortCuts
- h,j,k,l : Up,Down,Right and Left
- w : Start of next word
- b : Move to the next word
- e : End of the word
- :wq: Write and Save
- :q : Save
- :Set Number: For Adding Line Numbers

### About Vim Macros
- [Vim Macros](https://www.youtube.com/watch?v=Hd33Q0ZjS)

### Plugins
- My Fav:NERDTree and YouCompleteMe
- NerdTree:
- [Find Instructions Here](https://vimawesome.com/plugin/nerdtree-red)
- YouCompleteMe:
- [Find Instructions Here](https://vimawesome.com/plugin/youcompleteme)
- To change tabs: Ctrl+PgUp and Ctrl+PgDown