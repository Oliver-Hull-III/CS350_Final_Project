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

int main(char **argv, int argc){
    
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

}

vector<string> split(string in, string<vector> out){
    stringstream stream(in);
    
    string tempString;
    
    while(getline(stream,tempString,' ')) {
        out.push_back(tempString);
    }
    
}

int parseInputFile(fstream input){
    
    
    
    string command;
    vector <string> splitCommand;
    
    
    while(!input.eof()){
        
        

        getline(input, command);
        
        split(command,splitCommand);
        
        if(splitCommand[0] == "CREATE"){
            
        }
        else if(splitCommand[0] == "IMPORT"){
            
        }
        else if(splitCommand[0] == "CAT"){
            
        }
        else if(splitCommand[0] == "DELETE"){
            
        }
        else if(splitCommand[0] == "WRITE"){
            
        }
        else if(splitCommand[0] == "READ"){
            
        }
        else if(splitCommand[0] == "LIST"){
            
        }
        else if(splitCommand[0] == "SHUTDOWN"){
            
        }
        

        splitCommand.clear();
    }

}
