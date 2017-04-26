//
//  fileSystem.cpp
//  
//
//  Created by oliver on 4/24/17.
//
//

#include "fileSystem.hpp"
using namespace std;




//DUPLICATE CODE REMOVE LATER


struct Superblock{
	int numBlocks;
	int blockSize;
	int offset; // in bytes
	int hasFiles;
	
};



fileSystem::fileSystem(string diskName){

	
	
	diskIn.open(diskName, ios::in);
	diskOut.open(diskName, ios::out);

	Superblock sb;

	diskIn.read(reinterpret_cast<char*>(&sb),sizeof(Superblock));

	blockSize = sb.blockSize;
	numBlocks = sb.numBlocks;
	offset = sb.offset;
	
	freeBlockList = new bool [numBlocks];
	
	
	
	
	
	if(sb.hasFiles){
		//look through the disk and read data into our class
	}
	else{
		
		
	}
}

void fileSystem::create(string ssfsFName){
	
	//TODO: check if file already exists
	
	
	for(int i = 0; i<256; i++){
		if(freeiNodeList[i] == 0){
			freeiNodeList[i] = 1;
			for(int j = 0; j<ssfsFName.length(); j++)
				iNodeList[i].fileName[j] = ssfsFName[j];

			//update iNodeList on disk

			diskOut.seekp(blockSize * (i+1));
			diskOut.write(reinterpret_cast<char*>(&iNodeList[i]),sizeof(iNode));
		
			//TODO: update iNodeFreeList
			
			break;
		}
		
	}
	
	
	
}




void fileSystem::import(string ssfsFName, string unixFName){
	
}

void fileSystem::cat(string ssfsFName){
	
	
}

void fileSystem::del(string ssfsFName){
	

	
}

void fileSystem::write(string ssfsFName, char ch, int startByte, int numBytes){

	
	
	
}

void fileSystem::read(string ssfsFName, int startByte, int numBytes){
	
}


string fileSystem::list(){
	
	return "placeholder";
}

void fileSystem::shutdown(){
	
}
