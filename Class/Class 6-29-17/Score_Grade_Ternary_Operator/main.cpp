/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 29, 2017  11:10 AM
 * Purpose: Branching Study
 */

//System Libraries Here
#include <iostream>     //Input-Output Library
#include <cstdlib>      //Random Function
#include <ctime>        //Time Function

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables Here
    char score,grade;
    
    //Initialize Variables
    score=rand()%51+50; //[50,100]
            
    //Map Inputs to outputs or process data
    grade=score>=90?'A':
          score>=80?'B':
          score>=70?'C':
          score>=60?'D':'F';
    
  
    //Output Located Here
    cout<<"A score of "<<static_cast<int>(score)
            <<" gives a grade of "<<grade<<endl;

    //Exit
    
    return 0;
}

