/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Mark Sort 6 Lines
 * Created on July 20, 2017, 11:14 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


//Function Prototypes
void markSrt(int [],int);
void prntAry(int [],int,int);
void fillAry(int [],int);

int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variable
    const int SIZE=100;
    int array[SIZE];
    
    fillAry(array,SIZE);
    
    prntAry(array,SIZE,10);
    
    markSrt(array,SIZE);
    
    prntAry(array,SIZE,10);

    return 0;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){ 
                a[i]=a[i]^a[j];
                a[j]=a[i]^a[j];
                a[i]=a[i]^a[j];
            }
        }    
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}