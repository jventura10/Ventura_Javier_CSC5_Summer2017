/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: 
 * Created on July 16, 2017, 4:38 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototypes
float gPop(float,float,float);

int main(int argc, char** argv) {
    float sPop;               //Starting Population
    float bRate,dRate;        //Birth and Death Rate
    int numYrs;               //Number of Years ahead to predict population
    float newPop;             //New Size of Population  
    
    //Prompt For Data
    cout<<"This Program estimates population for the years,";
    cout<<" of your choosing."<<endl;
    cout<<"Enter the starting size of the population."<<endl;
    cin>>sPop;
    while(sPop<2){
        cout<<"Starting Size must be greater than 2!"<<endl;
        cin>>sPop;
    }
            
    cout<<"Now enter the Birth Rate of the Population"<<endl;
    cin>>bRate;
    while(bRate<0){
        cout<<"Birth Rate must not be negative"<<endl;
        cin>>bRate;
    }
    
    cout<<"Now enter the Death Rate of the Population"<<endl;
    cin>>dRate;
    while(dRate<0){
        cout<<"Death Rate must not be negative!"<<endl;
        cin>>dRate;
    }
    
    cout<<"Enter the number of years to display"<<endl;
    cin>>numYrs;
    while(numYrs<1){
        cout<<"The number of years to display must be 1 or greater!"<<endl;
        cin>>numYrs;
    }
    
    //Call Function
    for(int year=0;year<numYrs;year++){
    newPop=gPop(sPop,bRate,dRate);
    
    //Output Data
    cout<<fixed<<setprecision(0);
    cout<<endl;
    cout<<"The Population at the end of the year "<<(year+1)<<":"<<setw(15)<<
            newPop<<endl;
    
    sPop=newPop;
    }
    
    return 0;
}

//******************************************************************************
//******************************************************************************
//                              Get Population                                **
//Inputs:                                                                     ** 
//   P -> Population                                                          **
//   B -> Birth Rate                                                          **
//   D -> Death Rate                                                          **
//Output:                                                                     **   
//   N -> New Population                                                      **
//******************************************************************************
//******************************************************************************

float gPop(float P,float B,float D){
    float N;
    N=P+(B*P)-(D*P);
    return N;
}