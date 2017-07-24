/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 17, 2017, 1:18 PM
 * Purpose: Rainy Days and Mondays always get me down
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random function
#include <ctime>     //Time function
#include <iomanip>   //Formatting
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int DAYS=30;
const int MNTHS=3;

//Function Prototypes
void fillAry(char [][DAYS],int);
void prntAry(char [][DAYS],int);
void prntAry(int  [][MNTHS]);
char scorAry(char [][DAYS],int [][MNTHS]);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    char data[MNTHS][DAYS];
    int  stat[MNTHS][MNTHS]={};
    
    //Initialize variables
    fillAry(data,MNTHS);
    
    //Map inputs to outputs or process the data
    scorAry(data,stat);
    
    //Output the transformed data
    prntAry(data,MNTHS);
    prntAry(stat);
    
    //Exit stage right!
    return 0;
}

char scorAry(char data[][DAYS],int stat[][MNTHS]){
    char climate[]={'R','C','S'};
    for(int mnth=0;mnth<MNTHS;mnth++){
        for(int day=0;day<DAYS;day++){
            for(int clim=0;clim<MNTHS;clim++){
                if(data[mnth][day]==climate[clim]){
                    stat[mnth][clim]++;
                }
            }
        }
    }
}

void prntAry(int stat[][MNTHS]){
    char months[3][8]={"June   ","July   ","August "};
    cout<<"         R   C   S"<<endl;
    for(int mnth=0;mnth<MNTHS;mnth++){
        cout<<months[mnth];
        for(int rcs=0;rcs<MNTHS;rcs++){
            cout<<setw(3)<<stat[mnth][rcs]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"R -> Rainy"<<endl;
    cout<<"C -> Cloudy"<<endl;
    cout<<"S -> Sunny"<<endl;
}

void prntAry(char data[][DAYS],int mnths){
    char months[3][8]={"June   ","July   ","August "};
    cout<<"Climate for 3 summer months"<<endl;
    for(int mnth=0;mnth<mnths;mnth++){
        cout<<months[mnth];
        for(int day=0;day<DAYS;day++){
            cout<<data[mnth][day]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void fillAry(char data[][DAYS],int mnths){
    char climate[]={'R','C','S'};
    for(int mnth=0;mnth<mnths;mnth++){
        for(int day=0;day<DAYS;day++){
            data[mnth][day]=climate[rand()%3];
        }
    }
}