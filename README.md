# Code-Templates

Created this repo for understanding the concpets of git and github.  
While I was at it, I also learnt markdown. This README contains git commands and some basic explanation wherever needed for future reference.

## Notes:  

## _Git Concepts:_  
- Git vs Github:  
Git is a version control software for keeping track of your work. Git ensures that a complete history of your edits on a particular file is recorded. A very important point is, that you need to install git on your PC i.e. git works only locally on your machine and is responsible for version control of local files and directories. With git,  you can keep track of your errors that you resolved in a particular code, collaboration also becomes easier.  
Github is a webservice that uses git and has a great GUI that makes it easier for people to use.  
It is possible that a person uses Github but has no idea what is git, and it is also possible that a person does not use Github but uses git for version control of local files.  
- Repository:  
A repository or "repo" is a project, a code base containing all scripts and files pertaining to a particular project of yours.  
- Git clone:  
Git clone command is used when you want to work on a public repo on github or any other remote, and you want to work on it locally on your PC. It is as if you are downloading the entire project on your machine and now it is upto you to do whatever you want to. Note that this repository will automatically be initialized as a git repository on your machine and you can push this to other remotes as well after making your changes.  
Terminal command:  
'''sh
git clone <url>
'''

A repo can be cloned, updated and then pushed to github.  

An existing directory on local machine,
1. can be initialized as a git repo using git init
2. files can be added using git add (git add . to add all files)
3. added files can be committed using git commit (-a to add and commit all existing files)
4. create a repo on github
5. create a remote on your local machine using git remote add
6. push all your changes using git_push

git-commands.txt file consists of all the bash commands for git.  
The other two cpp scripts are my templates for competitive coding.
