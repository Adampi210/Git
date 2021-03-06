#include <stdio.h>

int main(int argc, char const *argv[]) {
  /*
  Git - version control system (VCS) for tracking changes in computer files
      - no specific language of framework, just stores files
      - distributive VCS (many controlers can work on a single project wihout being on the same network)
      - tracks all version and changes, changes can be reverted back to the last commit
      - Usually work on local repositories and push to remote
      - keeps track of file history using snapshots - these are done by using commit
      - files can be staged before commiting (add)

    Basic commands:
      - git init - Initialize Local Repository (create a .git folder in a given project folder (hidden by default))
      - git add <file> - adds specified files to the staging area, before commiting
      - git status - displays paths of files in staging area (files to be commitited)
      - git commit - commit changes in index (staging area) (and put them into local repository)
      - git push - pushes local repository to a remote repository
      - git pull - pull latest changes from the remote repository
      - git clone - copy a remote repository into a current folder
    Installing git:
      - linux (Debian) - sudo apt-get install git
    Other commands:
      - git --version - shows the version of git installed
      - git config --global user.name 'MY NAME' - adds name to the repository
      - git config --global user.email 'my email' - adds email to the repository
      - git rm --cached <file> - remove file from index (from staging area)
      - git add . - adds all files
      - git restore <file> - restore the file to the last add version
      - git commit -m 'message' - commits changes with a message
      - touch .gitignore - creates a file .gitignore that includes the files that won't be added with git add .
    Branching:
      - git branch <branch_name> - creates a branch to a repository
      - git checkout <branch_name> - changes branch from current to branch_name (default is master)
      - git merge <branch_name> - merges changes in a branch to the master branch
    Remote repository:
      - git remote - shows remote repositories
      - git remote add origin https://github.com/Adampi210/Git.git - adds a remote repo to the local repo
        - origin is the name of the remote repo, could be anything else
      - git push -u origin master - push the changes from the local repo to the remote repo (called origin) branch master
   */
  return 0;
}
