/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Grade Book
 * Created on July 23, 2017, 9:08 PM
 */

#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

//Function Prototypes
char ltGrds(float);

int main(int argc, char** argv) {

    //Declare Variables
    string stname[7]; //String to hold Names
    float tstscr[5][4]; //Take test scores
    char grades[5]; //Letter grade for test average
    float tstavg[5]; //Tests Average
    
    for(int i=0;i<5;i++){
        cout<<"\nEnter "<<(i+1)<<" student "<<" name: ";
        cin>>stname[i];
        
        cout<<"Enter their 4 test scores, Press enter after each: ";
        for(int j=0;j<4;j++){
            cin>>tstscr[i][j];
            while(tstscr[i][j]>100||tstscr[i][j]<0){
                cout<<"\nTest Score should be between 0 and 100"<<endl;
                cout<<"Enter test score: ";
                cin>>tstscr[i][j];
            }
        }
    }
    
    for(int i=0;i<5;i++){
        tstavg[i]=0;
        for(int j=0;j<4;j++){
            tstavg[i]+=tstscr[i][j];
            tstavg[i]=tstavg[i]/4.0;
        }
        grades[i]=ltGrds(tstavg[i]);
    }
    
    cout<<"Student name\tAverage Score\tLetter Grade"<<endl;
    
    for(int i=0;i<5;i++){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<stname[i]<<"\t\t"<<tstavg[i]<<"\t\t"<<grades[i]<<endl;
    }
    
    return 0;
}

char ltGrds(float score){
    if(score>= 90 && score<=100){
        return 'A';
    }
    else if(score>=80 && score<90){
        return 'B';
    }
    else if(score>=70 && score<80){
        return 'C';
    }
    else if(score>=60 && score<70){
        return 'D';
    }
    else{
        return 'F';
    }
}