all: ssfs ssfs_mkdisk

ssfs_mkdisk: ssfs_mkdisk.o
	g++ -o ssfs_mkdisk ssfs_mkdisk.o


ssfs_mkdisk.o: ssfs_mkdisk.cpp
	g++ -c ssfs_mkdisk.cpp


ssfs: ssfs.o
	g++ -o ssfs ssfs.o


ssfs.o: ssfs.cpp
	g++ -c ssfs.cpp
