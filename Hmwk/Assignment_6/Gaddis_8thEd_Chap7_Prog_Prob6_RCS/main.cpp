/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on July 17, 2017, 1:18 PM
 * Purpose: Rainy Days and Mondays always get me down
 */

//System Libraries Here
#include <iostream>     //Input Output Library
#include <cstdlib>      //Random Function
#include <cmath>        //Time Function
#include <iomanip>      //Input Output Manipulation

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int DAYS=30;
const int MNTHS=3;

//Like PI, e, Gravity, or conversions

//Function Prototypes Here
void fillAry(char [][DAYS],int);
void prntAry(char [][DAYS],int);
void prntAry(char [][MNTHS]);
char scorAry(char [][DAYS],int [][MNTHS]);
        
//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Number Seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare all Variables Here
    char data[MNTHS][DAYS];
    int stat[MNTHS][MNTHS];
    
    
    //Input Variables
    fillAry(data,MNTHS);
    
    //Map Inputs
    scorAry(data,stat);
    
    //Output Data
    prntAry(data,MNTHS);
    prntAry(stat);
    
    //Exit
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
    char months[3][8]={"June   ","July   ","August  "};
    cout<<"       R        C        S"<<endl;
    for(int mnth=0;mnth<<MNTHS;mnth++){
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
    char months[3][8]={"June     ","July     ","August  "};
    cout<<"Climate for 3 Summer months"<<endl;
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