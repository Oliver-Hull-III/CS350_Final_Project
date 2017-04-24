all: ssfs ssfs_mkdisk iNode fileSystem


ssfs_mkdisk: ssfs_mkdisk.o
	g++ -o ssfs_mkdisk ssfs_mkdisk.o

ssfs_mkdisk.o: ssfs_mkdisk.cpp
	g++ -c ssfs_mkdisk.cpp


ssfs: ssfs.o
	g++ -o ssfs ssfs.o

ssfs.o: ssfs.cpp
	g++ -c ssfs.cpp


iNode: iNode.o
	g++ -o iNode iNode.o


iNode.o: iNode.cpp
	g++ -c iNode.cpp


fileSystem: fileSystem.o
	g++ -o fileSystem fileSystem.o

fileSystem.o: fileSystem.cpp
	g++ -c fileSystem.cpp

clean:
	rm -f *.o ssfs ssfs_mkdisk iNode fileSystem
