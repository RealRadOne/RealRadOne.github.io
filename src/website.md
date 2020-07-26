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
- [Dynamic Programming Patterns](https://leetcode.com/discuss/general-discussion/458695/dynamic-programming-patterns)
- [How plagiarized is your code?](https://www.codequiry.com/)
- [A complete resource of everything](https://docs.google.com/document/d/1VNoEUzBtyCw0fDw0X_bvuhmCwz1qhNjETPJc5VRZqm8/edit#)
## Interview Prep
### Interview Prep Resource<br>
- [6 mistakes not to make on the resume](https://www.cnbc.com/2019/04/22/want-to-be-irresistible-to-hiring-managers-avoid-these-6-resume-mistakes-at-all-costs.html)
- [How to Ace Coding Interviews](https://medium.com/better-programming/how-to-ace-the-coding-interview-by-an-ex-facebook-interviewer-9c163a845d05)
## System Design
### System Design Resources
- [WIP]
## DevOps
### Docker
#### Installation
##### On Windows
- Note: I would never recommend trying this on windows.
- You might doubt your existence and feel like pulling all the hair from your head.Yes,Windows sucks!
- [Note:Ubuntu WSL is not sufficient to run docker.Shall not be considered a substitute.]
- For Windows Home:
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
- [Check this thread](https://github.com/docker/toolbox/issues/745)
##### Commands
-1 : To start       :net start com.docker.service
-2 : docker ps -a   : To list all the containers
-3 : docker run     : To run an image.If it does not exist it will be pulled from docker-hub
-4 : docker stop ID : To stop a running container
-5 : docker rm ID(First few letters will do)   : To remove a container permanently
-6 : docker images  : List of images on System
-7 : docker rmi     : To remove an images
-8 : docker pull    : To pull only the image
-9 : docker run -it name: To be logged into container
-10 : docker rm a b c : Remove multiple containers
-11 : docker rmi name : Removing docker image
##### Executing Command On Running Container
-1 : docker run name/abcd : Things run in attached mode i.e in Background
-2 : Ctrl+C: To stop the container
-3 : docker run -d name/abcd : You will be back to prompt immediately
##### On Ubuntu
- Follow the official documentation
### About CI/CD tools
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
-[]
## Big Data

### Spark
- [Beginner Introduction to Spark](https://www.analyticsvidhya.com/blog/2019/10/pyspark-for-beginners-first-steps-big-data-analysis/)
- [Hands On Tutorials](https://www.datacamp.com/community/tutorials/apache-spark-python#gs.fMIIqxM)
- [Setting it up with Docker](https://www.pavanpkulkarni.com/blog/13-spark-on-docker/)
### Hadoop
- [All the notes](https://docs.google.com/document/d/18wWGCD7K9vfZbufr7sPc7k2vyxxQSCkBhN9eHOL7V60/edit?usp=drive_web&ouid=100286576712943071349)

## About DBMS
### A store of SQL and NoSQL Data Bases
### MySQL
- [My Notes](https://docs.google.com/document/d/1FXsBstMlArobcqVFMgM_SBK4aaPRlic-9-_m3RCMWtU/edit?usp=drive_web&ouid=100286576712943071349)
### MongoDB
- [My Notes](https://docs.google.com/document/d/1NWE_j-CYRuXT91AfHxX051GwHef46v09ysdPx7Ass9o/edit)
### Redis
- [Interactive Redis](https://try.redis.io/)
- [0 to Master in 30 Min](https://www.openmymind.net/2011/11/8/Redis-Zero-To-Master-In-30-Minutes-Part-1/)
