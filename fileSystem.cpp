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

	
	
	diskIn.open(diskName, ios::binary | ios::in);
	diskOut.open(diskName, ios::binary | ios::out);

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
		if(fileNameList[i] == ssfsFName){
			
			cout<<"error, file exists"<<endl;
			return;
		}
	}
	
	
	int index;
	for(index = 0; index < 256; index++){
		if(freeiNodeList[index] == 0){
			freeiNodeList[index] = 1;
			break;
		}
		
	}
	for(int j = 0; j<ssfsFName.length(); j++)
		iNodeList[index].fileName[j] = ssfsFName[j];
	
	//update iNodeList on disk
	diskOut.seekp(blockSize * (index+1));
	diskOut.write(reinterpret_cast<char*>(&iNodeList[index]),sizeof(iNode));
	
	//TODO: update iNodeFreeList on disk
	

	
	//add file name to fileNameList
	
	
	
	for(int i = 0; i<256; i++)
		if(fileNameList[i] == "")
			fileNameList[i] = ssfsFName;
		
	
	
	
	
	
	
}




void fileSystem::import(string ssfsFName, string unixFName){

	//find index in iNodeList where ssfs file is
	int iNodeIndex;
	for(iNodeIndex = 0; iNodeIndex<256; iNodeIndex++)
		if(fileNameList[iNodeIndex] == ssfsFName)
			break;
	
	
	
	
	ifstream unixFile;
	unixFile.open(unixFName, ios::binary | ios::in);
	
	char toBeWritten[blockSize];

	//used to keep track of file size
	int blocksInFile = 0;

	
	
	
	
	while(!unixFile.eof()){
		
		blocksInFile++;
		
		//read 1 block of data from unixFile
		unixFile.read(toBeWritten,blockSize);
	
		
		
		//find free block in freeBlockList
		int blockNum;
		
		for(blockNum = 0; blockNum<numBlocks; blockNum++)
			if(freeBlockList[blockNum] == 0)
				freeBlockList[blockNum] = 1;

		
		if(blocksInFile < 12){

					
			diskOut.seekp(offset + (blockNum * blockSize));
			diskOut.write(toBeWritten,blockSize);

			
			
			iNodeList[iNodeIndex].blockAddressTable[blocksInFile] = blockNum;
			
			//TODO: update freeBlockList and iNode on disk
	
	
		}
		else{
			//indirect block stuff
		}
	}
	
	
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
