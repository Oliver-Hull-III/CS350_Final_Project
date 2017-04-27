//
//  fileSystem.hpp
//  
//
//  Created by oliver on 4/24/17.
//
//

#ifndef fileSystem_hpp
#define fileSystem_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct iNode{
	char fileName[32] = "";
	int fSize = 0;
	int blockAddressTable[12] = {-1};
	int indBlock = -1;
	int doubleIndBlock = -1;
};


class fileSystem{


	public:
		//Constructors
		fileSystem(std::string diskName);
	
	
		void create(std::string ssfsFName);
		void import(std::string ssfsFName, std::string unixFName);
		void cat(std::string ssfsFName);
		void del(std::string ssfsFName);
		void write(std::string ssfsFName, char ch, int startByte, int numBytes);
		void read(std::string ssfsFName, int startByte, int numBytes);
		std::string list();
		void shutdown();
	
	private:
	
		int numBlocks;
		int blockSize;
		int offset;
	
		std::ifstream diskIn;
		std::ofstream diskOut;

		std::string fileNameList[256];
	
	
		bool *freeBlockList;
		bool freeiNodeList[256] = {0};
		iNode iNodeList[256];
	
	
	

};


#endif /* fileSystem_hpp */
