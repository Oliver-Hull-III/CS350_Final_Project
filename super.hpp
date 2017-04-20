//
//  super.hpp
//  
//
//  Created by oliver on 4/20/17.
//
//

#ifndef super_hpp
#define super_hpp

#include <stdio.h>



class superBlock{
    public:
        superBlock(int blockSize, int numBlocks);
    
    private:
        int blockSize;
        int numBlocks;
    
};

#endif /* super_hpp */
