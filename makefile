CC=g++
CFLAGS=-I. -std=c++11
DEPS=src\essentials.hpp

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

essentials: src\essentials.o
	$(CC) -o bin\test.exe src\test.cpp src\essentials.cpp src\essentials.hpp $(CFLAGS)
