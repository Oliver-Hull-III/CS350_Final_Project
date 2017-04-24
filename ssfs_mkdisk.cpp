//
//  ssfs_mkdisk.cpp
//  
//
//  Created by oliver on 4/24/17.
//
//


#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

int main(int argc, char** argv){
	
	int numBlocks, blockSize;
	
	std::string fName;
	
	if(argc > 3)
		fName = argv[3];
	else
		fName = "DISK";
	
		
	std::ofstream ofs(argv[3], std::ios::binary | std::ios::out);

	ofs.seekp((numBlocks * blockSize * 8) - 1);   // sets file size. might have to remove * 8
	ofs.write("", 1);
	
	//TODO
	// write out Superblock (first 1 or 2 block)
	// block size, numBlocks, boolean hasFiles
	
	
	
}
