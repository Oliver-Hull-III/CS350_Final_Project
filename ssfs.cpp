//
//  main.cpp
//  
//
//  Created by oliver on 4/20/17.
//
//

#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>




using namespace std;

void split(string in, vector<string> out){
	stringstream stream(in);
	
	string tempString;
	
	while(getline(stream,tempString,' ')) {
		out.push_back(tempString);
	}

}
void parseInputFile(fstream input){
	
	
	
	string command;
	vector <string> command_split;
	
	
	while(!input.eof()){
		
		
		string ssfsFName, unixFName;
		
		int startByte, numByte;
		
		char ch;
		
		
		getline(input, command);
		
		split(command,command_split);
		
		if(command_split[0] == "CREATE"){
			
			ssfsFName = command_split[1];
			
			
			
		}
		else if(command_split[0] == "IMPORT"){
			ssfsFName = command_split[1];
			unixFName = command_split[2];
			
			
			
			
			
		}
		else if(command_split[0] == "CAT"){
			ssfsFName = command_split[1];
			
		}
		else if(command_split[0] == "DELETE"){
			ssfsFName = command_split[1];
			
		}
		else if(command_split[0] == "WRITE"){
			ssfsFName = command_split[1];
			ch = command_split[2][0];
			startByte = atoi(command_split[3].c_str());
			numByte = atoi(command_split[4].c_str());
		}
		else if(command_split[0] == "READ"){
			ssfsFName = command_split[1];
			startByte = atoi(command_split[3].c_str());
			numByte = atoi(command_split[4].c_str());
			
			
			
		}
		else if(command_split[0] == "LIST"){
			
			
		}
		else if(command_split[0] == "SHUTDOWN"){
			
		}
		
		
		command_split.clear();
	}
}




int main(int argc, char **argv){
	
    fstream disk, input1;    // input2, input3, input4;   we'll work with one input file for now
	
    disk.open(argv[1],fstream::in | fstream::out);

    input1.open(argv[2], fstream::in);
/*
    if(argc > 3){
        input2.open(argv[3], fstream::in);
    }
    if(argc > 4){
        input3.open(argv[4], fstream::in);
    }
    if(argc > 3){
        input4.open(argv[5], fstream::in);
    }
*/
    parseInputFile(input1);
	
	
	return 0;

}




