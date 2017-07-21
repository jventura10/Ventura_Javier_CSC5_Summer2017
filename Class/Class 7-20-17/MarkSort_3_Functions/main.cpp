/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 20th, 2017, 10:42 AM
 * Purpose:  Sorting in 3 functions
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random number generator
#include <ctime>     //Time for random number function
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void swap(int &,int &);
void minPos(int [],int,int);
void markSrt(int [],int);

//Execution begins here
int main(int argc, char** argv) {
    //Set the seed for the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize variables
    fillAry(array,SIZE);
    
    //Output the transformed data
    prntAry(array,SIZE,10);
    
    //Find a minimum at position X
    markSrt(array,SIZE);
    
    //Output the transformed data
    prntAry(array,SIZE,10);
    
    //Exit stage right!
    return 0;
}

void markSrt(int a[],int n){
    for(int i=0;i<n-1;i++){
        minPos(a,n,i);
    }
}

void minPos(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap(a[pos],a[i]);
    }
}

void swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
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