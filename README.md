# a simple 'hello world' program to show you some features of git
see presentation.pdf for explanations

## usage: get the directory and open it
	Git clone https://github.com/tdeppisch/git_tutorial.git
	cd git_tutorial

## compile and run the code with (needs g++)
	make
	./helloworld

## add a line of code to "hello_world.cpp" that lead to the following output

	Hello world.
	Hello sun.
	Hello moon.
	Hello stars.

## compile and if it works (!) commit your changes
	
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
    git diff
	
return to the master branch: `git checkout master`
and try so solve the conflicts: `git merge switch_feature`

## other useful commands
- copy changes from the remote directory to your local directory: `git
pull`
- add changes from the remote directory to your staging area: `git fetch`
- send your commited changes to the remote repository: `git push`
note: merge conflicts might occur!
- return to the last commited state and DELETE all changes: `git reset hard`
- return to a certain commit and DELETE all commits made afterwards: `git reset --hard COMMIT`
this cannot be undone!
- show changes of your local directory wih respect to your staging area `git diff`
- show changes of your local directory wih respect to a certain commit `git diff COMMIT`
