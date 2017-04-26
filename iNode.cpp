//
//  iNode.cpp
//  
//
//  Created by oliver on 4/6/17.
//
//

#include "iNode.hpp"

// default constructor

iNode::iNode() {
	fSize = 0;
	for(int i = 0; i < 12; i++)
		blockAddressTable[i] = -1;
	
	
	indBlock = -1;
	doubleIndBlock = -1;
	
	
	for(int i = 0; i < 32; i++)
		fileName[i] = 'x';
}

//copy constructor
iNode::iNode(const iNode &other){
	fSize = other.fSize;
	
	for(int i = 0; i < 12; i++)
		blockAddressTable[i] = other.blockAddressTable[i];
	indBlock = other.indBlock;
	doubleIndBlock = other.doubleIndBlock;
	
	
	
	for(int i = 0; i < 32; i++)
		fileName[i] = other.fileName[i];
	
	

}




iNode::iNode(std::string a_fileName){
	fSize = 0;
	for(int i = 0; i < 32; i++)
		fileName[i] = a_fileName[i];
	
	
	for(int i = 0; i < 12; i++)
		blockAddressTable[i] = -1;
	
	indBlock = -1;
	
	doubleIndBlock = -1;
	
}







// best to copy vals like this than to assign pointers to the original arrays
iNode::iNode(int a_fSize, int a_blockAddressTable[12], int a_indBlock, int a_doubleIndBlock, char a_fileName[32]) {
	fSize = a_fSize;
	for(int i = 0; i < 12; i++)
		blockAddressTable[i] = a_blockAddressTable[i];
	
	
	indBlock = a_indBlock;
	doubleIndBlock = a_doubleIndBlock;
	
	
	for(int i = 0; i < 32; i++)
		fileName[i] = a_fileName[i];
}
