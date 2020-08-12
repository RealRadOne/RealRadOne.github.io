# Home
## About
### An Introduction
Hey there, I am Sakshi.<br>
This is an observer in this constantly evolving world and observes everything be it arts, politics or music. However, what amazes me the most is how technology has changed all the domains.
And you are cordially invited to my observation book that documents my journey.
<p> <img class='thumbnail' style='width:200px' src='https://i.ibb.co/86mkYtd/20190413-063202.jpg'> </p><p>
</p>

### Professional Life
I am a grad in Computer Science from VIT University and I currently work for <a href=''>ExxonMobil</a> EMIT<br>

# Articles
## Deadly Designs
### About The Series
In a bid to organize my code more I landed on to design principles and structural patterns. I talk about these in my Medium Articles which I have linked down below:

### Part-1 <br>
- [An Introduction](https://medium.com/@sakshisinha.2016/deadly-designs-3056a67aa619)
### Part-2 <br>
- [Shady Singletons](https://medium.com/@sakshisinha.2016/deadly-designs-ac99f35c20f1)
### Part-3 <br>
- [Flabbergasting Factories](https://medium.com/@sakshisinha.2016/deadly-designs-131e23cda09f)
### Part-4 <br>
- [Problematic Prototypes](https://medium.com/@sakshisinha.2016/deadly-designs-8ef6d6f88835)
### Part-5 <br>
- [Bugging Builders](https://medium.com/@sakshisinha.2016/deadly-designs-d02e04c20300)

# Everything Computers!

## Data Structures
### Data Structure Resources<br>
- [Dynamic Programming Patterns]
(https://leetcode.com/discuss/general-discussion/458695/dynamic-programming-patterns)
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
- []

## Docker
### Installation
### On Windows
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
-1 : To start       : net start com.docker.service
-2 : docker ps -a   : List all the containers
-3 : docker run     : Run an image.If it does not exist it will be pulled from docker-hub
-4 : docker stop ID : Stop a running container
-5 : docker rm ID(First few letters will do)   : Remove a container permanently
-6 : docker images  : List of images on System
-7 : docker rmi     : Remove an image
-8 : docker pull    : Pull the image
-9 : docker run -it name: Log into container
-10 : docker rm a b c : Remove multiple containers
-11 : docker rmi name : Remove docker image
-12 : docker exec ID cat /abc : Access files inside docker
-13 : docker run --name webapp nginx:1.14-alpine
-14 : docker inspect container_ID : Additional details about container
-15 : docker attach: Check local output
-16 : docker build -t name/tag .
-17 : docker run -it tag uilitly
-18 : docker push : Add the image to dockerhub
-19 : docker compose up : Bring up the application

### Commands On Running Container
-1 : docker run name/abcd : Run in attached mode
-2 : Ctrl+C: Stop the container
-3 : docker run -i : Run in interactive mode
-4 : docker run -d : Run in background mode/detached mode.
-5 : docker run -e :Set an environment variable
-6 : Use docker inspect for finding environment variables
-7 : Config section has the environment variables
-8 : docker run --name NAME

### Port Mapping
- Docker Host/Engine : The host where docker is installed
- IP on which I can access the application from web browser
-1 : Use the default internal IP(Only accessible within the docker host)
-2 : Ex- docker run -p 80:5000 abc/xyz
-3 : Or map it to a port use external mapping

### Volume Mapping
- Containers live as long as process inside them exists
To ensure a local data store.Map a directory outside the container on the Docker.
- Ex: docker run -v /opt/datadir: /var/lib/mysql MySQL
- opt/datadir mapped to /var/lib/mysql

### Creating Images
- Write a docker file
- The docker file will have all instructions
- d

### DockerFile
- Everything is instruction and Argument
- Ex FROM Ubuntu
- FROM: Instruction
- Ubuntu:Agrument
- Each line of instruction creates a new layer in Docker

### Docker Compose
A better way to set up complex application running multiple services
- All changes stored in docker compose config file
-  

## About CI/CD tools
### Jenkins
- Jenkins is a web server
- [About Jenkins](https://www.youtube.com/playlist?list=PLCRqvOk_BGhVi_mT_urqoJqcndJkf2lDS)

### Bash Scripting
- [A good scripting Guide](http://mywiki.wooledge.org/BashGuide)
- [Advanced Scripting Guide](http://www.tldp.org/LDP/abs/abs-guide.pdf)
### Scripting w/PowerShell
The Windows CounterPart Of Bash.
- [Why I hate Powershell?](https://www.educba.com/powershell-vs-cmd/)
- [Learn in a month of Lunches](#)

## CyberSecurity
### More About Computers
Inspired By Mr Robot
- [RainBow Tables-How they work?](http://kestas.kuliukas.com/RainbowTables/)
- [About Salting And Peppering](https://blogs.quickheal.com/password-security-a-dash-of-salt-and-little-of-hash-to-go-please/)
- [How does SHA-256 work](https://www.youtube.com/watch?v=mbekM2ErHfM)
- [Have I been pwned?](https://haveibeenpwned.com/)
- [Why salting with usernames is bad](https://smerity.com/articles/2012/salting_with_usernames.html)
- []

## Big Data

### Spark
- [Beginner Introduction to Spark](https://www.analyticsvidhya.com/blog/2019/10/pyspark-for-beginners-first-steps-big-data-analysis/)
- [Hands On Tutorials](https://www.datacamp.com/community/tutorials/apache-spark-python#gs.fMIIqxM)
- [Setting it up with Docker](https://www.pavanpkulkarni.com/blog/13-spark-on-docker/)

### Hadoop
- [All the notes](https://docs.google.com/document/d/18wWGCD7K9vfZbufr7sPc7k2vyxxQSCkBhN9eHOL7V60/edit?usp=drive_web&ouid=100286576712943071349)

## About DBMS
### MySQL
- [My Notes](https://docs.google.com/document/d/1FXsBstMlArobcqVFMgM_SBK4aaPRlic-9-_m3RCMWtU/edit?usp=drive_web&ouid=100286576712943071349)
### MongoDB
- [My Notes](https://docs.google.com/document/d/1NWE_j-CYRuXT91AfHxX051GwHef46v09ysdPx7Ass9o/edit)
### Redis
- [Interactive Redis](https://try.redis.io/)
- [0 to Master in 30 Min](https://www.openmymind.net/2011/11/8/Redis-Zero-To-Master-In-30-Minutes-Part-1/)

## Dev Kid's Basics

### About Git
### A developer's essential
Resources to get you going

- [Oh shit,git!](https://ohshitgit.com/)


### About Vim
#### Superpowers that can make you forget Sublime and Atom
### ShortCuts
- h,j,k,l : Up,Down,Right and Left
- w : Start of next word
- b : Move to the next word
- e : End of the word

### About Ansible
#### Understanding YAML
Just a formal like XML or JSON!
- Data represented in Key-Value pairs
- 
