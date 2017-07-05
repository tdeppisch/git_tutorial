# a simple 'hello world' program to show you some features of git

## usage: compile and run the code with
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

