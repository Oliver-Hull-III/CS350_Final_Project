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
#include "iNode.hpp"

class fileSystem{


	public:
		//Constructors
		fileSystem(std::string diskName);
		std::vector<iNode> iNodeList;
	
	
		void create(std::string ssfsFName);
		void import(std::string ssfsFName, std::string unixFName);
		void cat(std::string ssfsFName);
		void del(std::string ssfsFName);
		void write(std::string ssfsFName, char ch, int startByte, int numBytes);
		void read(std::string ssfsFName, int startByte, int numBytes);
		std::string list();
		void shutdown();
	
	private:
		std::vector<bool> freeBlockList;
		std::vector<bool> freeiNodeList;	
		//std::vector<iNode> iNodeList;
	
	
};


#endif /* fileSystem_hpp */
