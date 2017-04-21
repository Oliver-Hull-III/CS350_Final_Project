all: ssfs

ssfs: ssfs.o
	g++ -o ssfs ssfs.o


ssfs.o: ssfs.cpp
	g++ -c ssfs.cpp
