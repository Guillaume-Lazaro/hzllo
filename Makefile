CC=g++
hello: helloworld.cpp helloworld2.cpp
	$(CC) -o hello helloworld.cpp helloworld2.cpp -I.
