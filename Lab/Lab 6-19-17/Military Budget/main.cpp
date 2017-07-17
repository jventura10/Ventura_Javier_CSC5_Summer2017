/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 19, 2017, 12:33 AM
 * Purpose: Calculate The Federal Military Budget
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like Physics/Gravity/conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float milBudg; //Military BUdget
    float fedBudg; //Federal Budget
    float percMil; //PErcentage MIlitary Budget
    
    //Input or initialize values Here
    milBudg=609.3e09f; //609.3 Billion Dollar number from google search 
    fedBudg=3.8e12f; //3.8 trillion dollar number from google search
    
    //Process/Calculations Here
    percMil=(milBudg/fedBudg)*100; //Percentage result
    
    //Output Located Here
    cout<<"The Military Budget = $"<<milBudg<<endl;
    cout<<"The Federal Budget = $"<<fedBudg<<endl;
    cout<<"The military Percentage = "<<percMil<<"%"<<endl;
    
    //Exit
    return 0;
}

