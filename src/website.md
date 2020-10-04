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

## Articles
### Deadly Designs
### About The Series
In a bid to organize my code more I landed on to design principles and structural patterns. I talk about these in my Medium Articles which I have linked down below:

### Part-1<br>
- [An Introduction](https://medium.com/@sakshisinha.2016/deadly-designs-3056a67aa619)

### Part-2<br> 
- [Shady Singletons](https://medium.com/@sakshisinha.2016/deadly-designs-ac99f35c20f1)

### Part-3 <br>
- [Flabbergasting Factories](https://medium.com/@sakshisinha.2016/deadly-designs-131e23cda09f)

### Part-4 <br>
- [Problematic Prototypes](https://medium.com/@sakshisinha.2016/deadly-designs-8ef6d6f88835)

### Part-5 <br>
- [Bugging Builders](https://medium.com/@sakshisinha.2016/deadly-designs-d02e04c20300)

## Everything Computers!

### Data Structures
### Data Structure Resources<br>
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
- To start       : net start com.docker.service
- docker ps -a   : List all the containers
- docker run     : Run an image.If it does not exist it will be pulled from docker-hub
- docker stop ID : Stop a running container
- docker rm ID(First few letters will do)   : Remove a container permanently
- docker images  : List of images on System
- docker rmi     : Remove an image
- docker pull    : Pull the image
- docker run -it name: Log into container
- docker rm a b c : Remove multiple containers
- docker rmi name : Remove docker image
- docker exec ID cat /abc : Access files inside docker
- docker run --name webapp nginx:1.14-alpine
- docker inspect container_ID : Additional details about container
- docker attach: Check local output
- docker build -t name/tag .
- docker run -it tag uilitly
- docker push : Add the image to dockerhub
- docker compose up : Bring up the application

### Commands On Running Container
- 1 : docker run name/abcd : Run in attached mode
- 2 : Ctrl+C: Stop the container
- 3 : docker run -i : Run in interactive mode
- 4 : docker run -d : Run in background mode/detached mode.
- 5 : docker run -e :Set an environment variable
- 6 : Use docker inspect for finding environment variables
- 7 : Config section has the environment variables
- 8 : docker run --name NAME

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
- The Windows CounterPart Of Bash.
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
- A developer's essential
- Resources to get you going
- [Oh shit,git!](https://ohshitgit.com/)


### About Vim
- Superpowers that can make you forget Sublime and Atom

### ShortCuts
- h,j,k,l : Up,Down,Right and Left
- w  : Start of next word
- b  : Move to the next word
- e  : End of the word
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

## Everything Automation
### Kubernetes
### Container-Orchestration
- Automatically deploying and managing containers
- Ex: Docker Swarm,Kubernetes,MESOS

### Architecture Overview
- Nodes: Machine on which Kubernetes is installed
- Also called minions

### Kube-API Server
- Authenticate User

### Basic-Commands
- minikube start: Start Minikube server
- kubectl run name --image=name: Run an image
- kubectl get pods: Information on pods running
- kubectl get podname: Information on specific pod
- kubectl describe podname: More info
- kubectl delete podname: Remove a pod
- kubectl edit pod: For editing yaml

## Ansible
- Agentless
- Uses SSH in Linux
- Powershell for Windows
- BEWARE OF INDENTATION WITH ANSIBLE 
- Eshtablishes connections with servers through SSH

### Installation
- For everyone who hates Windows.WSL is here to save our ass.Yayyy!
- [Ansible through Windows](https://www.jeffgeerling.com/blog/2017/using-ansible-through-windows-10s-subsystem-linux)

### Understanding YAML
#### Just a format like XML or JSON!
- Data should be represented in Key-Value pairs

### Ansible Inventory
- Has data about target systems
- Default inventory: etc/ansible/hosts
- A List of servers

### Inventory file
- To define a group
- [Group name]--List servers
- Multiple nested groups possible
- To define a group in a group
- [parent_group:"children"] List child groups
- Default group: All
- [Example Inventory file](https://riptutorial.com/ansible/example/22593/hosts-file)

### Inventory Parameters
- Examples
- 1. Ansible_host: Define localhost in absence of other hosts
- 2. Ansible_Port: Tells which port to connect 
- 3. Ansible_SSH_pass: Define the SSH password for Linux

### Ansible Playbooks

- Ansible's Orchestration Language
- Set of instructions
- Written in YAML format 

### Ansible Plays

- Define a set of activities(tasks)
- Task
-  1. An action performed on the host
-  2. Ex-run a script,install package
- Tasks are represented in the playbook as an array
- The position of entries here matters
- Indentation and orientation necessary

### Ansible Modules

- Example: System,DataBase etc
- Ensure idempotency in all the modules

### Command Module

- A free form parameter
- Execute command on a remote node
- Module Name: Command
- Refrence:
- [Official Documentation](https://docs.ansible.com/ansible/latest/modules/command_module.html)

### Script Module

- Executes a script local to Ansible
- Takes care of copying scripts and executing on remote systems
- Syntax: script: location

### Service Module

-   Start,Stop or Restart a service
[x] Started   
[-] Start 
-   Started:to endure the service is started
-   Ensures idempotency of an operation

### Ansible Variables

- Hold information about the hosts
- Example:ansible_host,ansible_connection etc in inventory
- To add to playbook use vars directive
- Can be defined in a seperate file as well
- Format used:jinja 2 templating name{{}}

### Ansible Conditionals

- Use when <<condition>>
- Example when: variable=="name"
- Use ==
- Use and

### Ansible Roles

- Can be used for better code 
- Get it from Ansible Directory
- [Ansible Galaxy](https://galaxy.ansible.com/)
- These roles can be specified at etc/ansible
- ansible-galaxy search
- ansible-galaxy run 
- ansible-galaxy list
- Specify under roles
- 

## OkTober

### My October Of Changes

---
*Here are some things I have been doing*
- [Coding Log](https://github.com/RealRadOne/30-days-of-DS/blob/master/LeetCode/Day1.md)
- [Learning About Azure](https://github.com/RealRadOne/30-days-of-DS/blob/master/Azure/basics.md)
- [System Design](#)
---

### Goals in October
- Waking up earlier
- Staying off social media
- Maintain consistent habits
- More focus on personal and office work
- Healthy Work Life Balance
- Taking better care of personal and professional realtions

### *Oktober Journal*

- 3/10/2020
- ![Starting with Azure](https://drive.google.com/file/d/1G1eny8Z5H56Ih53oSmGG0gKovBGVfBa9/view?usp=sharing)

- 4/10/202
- ![Azure CLI](https://drive.google.com/file/d/12GzqTQ8caawAw1b7B0EFWQx_Cab8WRe9/view?usp=sharing)
- ![Some Failed Git Workflows](https://drive.google.com/file/d/1PUuF4cCBBy-Rh6xfs7kpG_HKPpm3xWvP/view?usp=sharing)
:)

## Azure Notes
### About AZ-900
### Containers
- Provide a consistent,isloated execution environment
- Applications and dependencies packaged
- Standard runtime environment needed to execute the app
- Example:Docker

*Containers start up in few seconds!?*
There is no OS to boot and initialize.We only need the app to launch.
### Serverless Computing
- Application broken down into separate functions
- Good for automated tasks
- Cloud computing is flexible and cost-efficient

### Difference between VM,Containers and Serverless
- ![VM,Containers and Serverless](https://docs.microsoft.com/en-us/learn/modules/principles-cloud-computing/media/2-vm-vs-container-vs-serverless.png)
- Thus was the difference

### A Few Features Of Cloud
- Cost effective
- Scalable

**Vertical Scaling**-Scaling UP.Adding resources to increase power of an existing server.<br>
**Horizontal Scaling**-Scaling OUT.Adding more servers that function together as a single unit.
- Elastic
- Current
- Reliable:Data backup,Disaster and Recovery Present

### CapEx Vs OpEx
- CapEx: Spending money on physical infrastructure.Expense deduction comes with time.Ex:Server,Storage and Network costs.
- OpEx: Spending money on services or products now.Ex:Software Licenses

### Cloud Deployement Methods

- *Public Model*
- Local hardware to manage or keep up to date
- Ex:AWS and Azure

- *Private Cloud*
- Cloud environment in own datacenter
- Self service access to compute resources

- *Hybrid Cloud*
- Mix of Public+Private
- Ex:Host website in public Link to Private clou

 

