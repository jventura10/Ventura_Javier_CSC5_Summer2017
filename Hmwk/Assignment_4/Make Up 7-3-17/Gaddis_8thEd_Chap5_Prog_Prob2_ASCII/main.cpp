
/* 
 * File:   main.cpp
 * Author: Jave
 * Purpose: Display codes 0 to 127 from ASCII
 * Created on July 9, 2017, 8:16 PM
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {
    int codes;
    codes=0;
    while(codes<=128){
        printf("%d = %c \n",codes,codes);
        cout<<endl;
        codes++;
        
    }
  

    return 0;
}

