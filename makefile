# CS350 - Program 5

all: ssfs ssfs_mkdisk

ssfs_mkdisk: ssfs_mkdisk.o
	g++ -std=c++11 -o ssfs_mkdisk ssfs_mkdisk.o

ssfs_mkdisk.o: ssfs_mkdisk.cpp
	g++ -c -std=c++11 ssfs_mkdisk.cpp

ssfs: ssfs.o fileSystem.o
	g++ -g  ssfs.o fileSystem.o -o ssfs

ssfs.o: ssfs.cpp
	g++ -std=c++11 -g -c ssfs.cpp

fileSystem.o:	fileSystem.cpp 
	g++ -std=c++11 -g -c fileSystem.cpp

clean:
	rm -f *.o ssfs ssfs_mkdisk
