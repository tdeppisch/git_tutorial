CC        = g++
#CC        = clang++

helloworld: hello_world.o
	$(CC) hello_world.o -o helloworld

%.o: %.cpp
	$(CC) $(FLAGS) -c -O2 $<

.phony: clean
clean:
	rm *.o
	rm helloworld
