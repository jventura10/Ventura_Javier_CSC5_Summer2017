/*
 * File:   main.cpp
 * Author: Jay
 * Purpose: This Program Calculates the average of 5 test scores
 * Created on June 26, 2017, 10:02 PM
 */


//Include System Libraries
#include <iostream>
#include <iomanip>

using namespace std; 

int main(int argc, char** argv) {

    //Declare Variables
    float tstSco1;        //Test Score 1 must be a number, not percentage
    float tstSco2;        //Test Score 2 must be a number, not percentage
    float tstSco3;        //Test Score 3 must be a number, not percentage
    float tstSco4;        //Test Score 4 must be a number, not a percentage
    float tstSco5;        //Test Score 5 must be a number, not a percentage
    float scoAvg;        //This is the average of the five scores given 
    
    //Prompt For Data 
    cout<<"This Program calculates the average of five test scores."<<endl;
    cout<<"Please enter the five test scores (Not a percent value),press enter"
            "after each number."<<endl;
    cin>>tstSco1>>tstSco2>>tstSco3>>tstSco4>>tstSco5;

    //Process Data
    scoAvg=(tstSco1+tstSco2+tstSco3+tstSco4+tstSco5)/5;
    
    //Output Data
    cout<<"The average of the five test scores is "<<setprecision(3)
            <<scoAvg<<endl;

    return 0;
    
    //Exit 

}


