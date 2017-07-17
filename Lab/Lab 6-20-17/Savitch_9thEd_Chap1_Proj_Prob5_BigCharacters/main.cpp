/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 20,2017 1:05 PM
 * Purpose: Big Characters
 */

//System Libraries Here

#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all Variables Here
    char c;
    
    //Initialize by input from command line
    cout<<"What characters would you like to use ";
    cout<<"to make a Big Letter C"<<endl;
    cin>>c;
    
    //Process/Calculations Here
    
    //Output Transformed data
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    
    //Exit
    
    return 0;
}

