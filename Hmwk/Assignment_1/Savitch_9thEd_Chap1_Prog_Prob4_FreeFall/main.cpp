/* 
 * File:   main.cpp
 * Author: Javier Ventura 
 * Created on June 20,2017 12:26 PM
 * Purpose:  Homework Free Fall Problem
 */



//System Libraries Here
#include <iostream>

using namespace std;

//Global Constants Only, No Global Variables
const float GRAVITY=3.2714e1f; //32.174 ft/sec^2
const float CNVFTM=3.281f; //3.281 ft/meter



int main(int argc, char** argv) {
    
    //Declare all Variables Here
    float altFt,altM,time; //Altitude in feet or meters along with time (sec)
    
    //Input data
    cout<<"This problem calculates the altitude ";
    cout<<"dropped in free fall."<<endl;
    cout<<"Input the measured time,in seconds, ";
    cout<<"for the object to have dropped."<<endl;
    cin>>time;
    
    //Map inputs to outputs or process the data
    altFt=GRAVITY*time*time/2;
    //altFt=GRAVITY/2*pow(time,2);   <-- also possible but no need,expensive
    //altFt=GRAVITY/2*exp(2*log(time)); <-- also possible but no need,expensive
    altM=altFt/CNVFTM;
    //altFt=1/2*GRAVITY*time*time; //Bad since integers 1/2=0
   
    //Output Located Here
    cout<<"The distance dropped = "<<altFt<<"(ft)"<<endl;
    cout<<"The distance dropped = "<<altM<<"(m)"<<endl;
    
    //Exit
    
    return 0;
}

