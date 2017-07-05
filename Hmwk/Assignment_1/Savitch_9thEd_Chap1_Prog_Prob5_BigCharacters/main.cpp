/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Created on June 20,2017 1:05 PM
 * Purpose: This Program converts any character to a Big Character C
 */

//System Libraries Here

#include <iostream>

using namespace std;


//Program Execution Begins Here
int main(int argc, char** argv) {

    //Declare all Variables Here
    char key; //Variable key is anything on the keyboard (letter,number,grammar)
    
    //Initialize by input from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Big Letter C?"<<endl;
    cin>>key;
    
  
    
    //Output Transformed data
    cout<<"  "<<key<<key<<key<<endl;
    cout<<" "<<key<<"   "<<key<<endl;
    cout<<" "<<key<<endl;
    cout<<" "<<key<<endl;
    cout<<" "<<key<<endl;
    cout<<" "<<key<<"   "<<key<<endl;
    cout<<"  "<<key<<key<<key<<endl;
    
    //Exit
    
    return 0;
}

