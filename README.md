# a simple 'hello world' program to show you some features of git

## usage: get the directory and open it
	Git clone https://github.com/tdeppisch/git_tutorial.git
	cd git_tutorial

## compile and run the code with
	make
	./helloworld

## some git commands for getting information about the repository
	git --help
	git log
	git show
	git status

## for some advanced features:
switch to the other branch `git checkout switch_feature`
explore the newly introduced features:

    make
    ./helloworld 1
    ./helloworld 2
    ./helloworld 34
    git show
	
return to the master branch: `git checkout master`
and try so solve the conflicts: `git merge switch_feature`

## other useful commands
- copy changes from the remote directory to your local directory: `git
pull`
- add changes from the remote directory to your staging area: `git fetch`
- send your commited changes to the remote repository: `git push`
    note: merge conflicts might occur
- reset a file to the last committed state: `git reset FILE`
- reset your local directory to a certain commit: `git reset COMMIT`
- show changes of your local directory wih respect to your staging area `git diff`
- show changes of your local directory wih respect to a certain commit `git diff COMMIT`
