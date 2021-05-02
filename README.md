# Code-Templates

Created this repo for understanding the concpets of git and github.  
While I was at it, I also learnt markdown. This README contains git commands and some basic explanation wherever needed for future reference.

## _Git Concepts:_  
- Git vs Github:  
Git is a version control software for keeping track of your work. Git ensures that a complete history of your edits on a particular file is recorded. A very important point is, that you need to install git on your PC i.e. git works only locally on your machine and is responsible for version control of local files and directories. With git,  you can keep track of your errors that you resolved in a particular code, collaboration also becomes easier.  
Github is a webservice that uses git and has a great GUI that makes it easier for people to use.  
It is possible that a person uses Github but has no idea what is git, and it is also possible that a person does not use Github but uses git for version control of local files. However, we get the best of both worlds when we use  git and github together. Github is a remote, i.e. it is a parallel server for all your directories on your local machine. Github puts out your work in open for the open-source community where people can collaborate and suggest changes to your work. Thus its best to use Git and Github together.  
 
- Repository:  
A repository or "repo" is a project, a code base containing all scripts and files pertaining to a particular project of yours.  

- Git clone:  
Git clone command is used when you want to work on a public repo on github or any other remote, and you want to work on it locally on your PC. It is as if you are downloading the entire project on your machine and now it is upto you to do whatever you want to. Note that this repository will automatically be initialized as a git repository on your machine and you can push this to other remotes as well after making your changes. A repo can be cloned, updated and then pushed to github.  
Terminal command:  
```sh
git clone <url>
```
For e.g.
```sh
https/https://github.com/hardik01shah/code-templates.git
```
- Git init:  
This command is used for pushing existing directories on your machine to a remote like github. Not all directories on your machine are git repositories. They need to be initialized as git repositories. To do that use the command:  
```sh
git init
```
An existing directory on local machine,
1. should be initialized as a git repo using git init
2. files to be comitted should be added to the stage using git add (git add . to add all files)
3. added files can be committed using git commit (-a to add and commit all existing files)
4. create a repo on github
5. create a remote on your local machine using git remote add
6. push all your changes using git_push  

- Git status
This commmand is used to get the status of the pwd(present working directory). Once you execute this command you get to know what all changes are yet to be committed, what all files are not added to the repository. 
```sh
git status
```

- Git remote
There are various commands associated with remotes.  
This command shows you the list of all the remotes available for that git repository.
```sh
git remote
```  
This command shows the remotes with more information than the previous command.
```sh
git remote -v
```
This command is used to add a remote. When you plan to add a repository on your local machine to a new empty repository on github, use the command to add github as a remote.
For creating a new remote (origin is a convention, it is the name of the remote)
*this will work only if a repository is created on github. first create repo on github and then run the add remote cmd.
```sh
git remote add origin https://github.com/<username>/<repo_name>.git
```
For e.g.
```sh
git remote add origin https://github.com/hardik01shah/code_templates.git
```

- Git config
This command gives you information about your registered email and username with git on your local machine.
```sh
git config --list
```

- Git add and Git commit
Once, you have editted a file, and saved it, the changes are not visible on your version control i.e. git. To do that the changes must be committed. Github commits only those files that are in the staging area or stage. Files are added to the stage using git add command.  
To add specific files to the stage:
```sh
git add <file-name>
```
To add all the files in the pwd:
```sh
git add .
```  
Now, to commit these changes, we use the git commit command. 
To commit files that are added to the stage use:
```sh
git commit -m "Type-your-message-here"
```
The -m extension is used for adding a message with a commit like "Updated README"

TO commit all the files in the pwd, you don't need to use git add. Directly run the command:
```sh
git commit -a -m "Type-your-message-here"
```

-Git push
Now that changes have been committed, you need to push these changes to a remote like github. After this command changes you made locally on your machine will be visible on your github repo.  
Use:
```sh
git push <remote> <branch>
```
For e.g.
```sh
git push origin master 
```

-Git Pull
Now, if you made changes to your files on your remote like Github, or someone else who is collaborator pushed some changes to the repo on the remote, and you want that version on your local machine, you pull those changes using git pull. Note that, if you make some changes on your local machine and some changes have been made on the remote repo, but haven't been pulled and you try to push your changes an error will come up. Like this:
```sh
! [rejected]        master -> master (fetch first)
error: failed to push some refs to 'https://github.com/<username>/<repo-name>.git'
hint: Updates were rejected because the remote contains work that you do
hint: not have locally. This is usually caused by another repository pushing
hint: to the same ref. You may want to first integrate the remote changes
hint: (e.g., 'git pull ...') before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
```
To fix, ull the remote changes and then push your changes. A merge will occur in this situation and if no merge conflicts occur, the merge will be handled by git.

to pull use:
```sh
git pull <remote> <branch>
```
For e.g.
```sh
git pull origin master
```
- Git clone vs Git pull
Git clone is used for just downloading exactly what is currently working on the remote server repository and saving it in your machine's folder where that project is placed. Mostly it is used only when we are going to upload the project for the first time. After that pull is the better option.

Git pull is a (clone(download) + merge) operation and mostly used when you are working as teamwork. In other words, when you want the recent changes in that project, you can pull.

The clone will setup additional remote-tracking branches.
git pull:
```sh
git init
git remote add origin git://github.com/<username>/<repo-name>.git
git fetch --all
git pull origin master
```
git clone:
```sh
git clone git://github.com/chandra/repo.git 
```

git-commands.txt file consists of all the bash commands for git.  
The other two cpp scripts are my templates for competitive coding.
