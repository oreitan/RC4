//
//  main.cpp
//  hw1 rc4
//
//  Created by or eitan on 07/12/2019.
//  Copyright © 2019 or eitan. All rights reserved.
//

#include <iostream>
#include <stdint.h>
#include <fstream>
#include "RC4.hpp"

using namespace std;
int main(int argc, const char * argv[]) {

    ofstream resFile;
    resFile.open("result.txt");
    int resarray[256]={0};
     __uint128_t key = rand();
    for (int c=0;c<100000;++c)
    {
        RC4 res(&key);
        res.PRGA();
        resarray[res.PRGA()]+=1;
        ++key;
    }
    for (int p=0;p<255;++p)
        resFile<<resarray[p]<<"\n";
    resFile.close();
    
  
    
    
    return 0;
}




