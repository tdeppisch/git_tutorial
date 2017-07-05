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
switch to a the other branch, explore its features, return to the master branch and try so solve the conflicts

	git checkout switch_feature
	make
	./helloworld 1
	./helloworld 2
	./helloworld 34
	git show
	git checkout master
	git merge switch_feature

