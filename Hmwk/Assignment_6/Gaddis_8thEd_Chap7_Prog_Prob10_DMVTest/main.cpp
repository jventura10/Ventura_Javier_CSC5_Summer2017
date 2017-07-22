/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 17, 2017, 12:15 PM
 * Purpose:  Drivers Test
 */

//System Libraries Here
#include <iostream>     //Input Output Library
#include <cstdlib>      //Random Function
#include <cmath>        //Time Function

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(char [],int);
void fillAry(char [],char [],int,int);
void prntAry(char [],int);
char scorAry(char [],char [],char [],int);
        
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare all Variables Here
    const int SIZE=40;
    char pass=0.75f*SIZE;
    char key[SIZE],answer[SIZE],cW[SIZE];
    char percent=60; //Bias the answers,realize starts with 25%
    
    //Input Variables
    fillAry(key,SIZE);
    fillAry(key,answer,SIZE,50);
    
    //Map Inputs
    char score=scorAry(key,answer,cW,SIZE);
    
    //Output Data
    prntAry(key,SIZE);
    prntAry(answer,SIZE);
    prntAry(cW,SIZE);
    cout<<" "<<endl;
    cout<<"You received a score of "<<static_cast<int>(score);
    cout<<"/"<<SIZE<<((score>=pass)?" Pass":" Fail")<<endl;
    
    //Exit
    return 0;
}

void fillAry(char key[],char ans[],int n,int percent){
    for(int i=0;i<n;i++){
        if((rand()%100+1)<=percent){
            ans[i]=key[i];
        }
        else{
            ans[i]=rand()%4+'A';
        }
    }
}

char scorAry(char key[],char ans[],char cW[],int n){
    int score=0;
    for(int i=0;i<n;i++){
        if(key[i]==ans[i]){
            score++;
            cW[i]='C';
        }
        else{
            cW[i]=key[i]+32;
        }
    }
    return score;
}

void prntAry(char a[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
}

void fillAry(char a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%4+'A';
    }
}

