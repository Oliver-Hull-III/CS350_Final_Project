//
//  iNode.hpp
//  
//
//  Created by oliver on 4/6/17.
//
//

#ifndef iNode_hpp
#define iNode_hpp

#include <stdio.h>
#include <string>

class iNode{
    public:
        iNode();
    
    private:
		std::string fileName;
        int fSize;
        int blockAddressTable[12];
        int indBlock;
        int doubleIndBlock;
};




#endif /* iNode_hpp */
