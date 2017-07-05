/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Using the character selected, program will make a triangle shape
 * Created on June 23, 2017, 9:29 PM
 */

//Include Libraries Here
#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    //Declare all Variables Here
    char key;  //Character can be any found on keyboard and chosen by user
               //Number,letter,or even grammar tool 
    
    //Initialize by input from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Triangle Pattern"<<endl;
    cin>>key;
    
   
    
    //Output Transformed data
    cout<<" "<<" "<<" "<<key<<" "<<" "<<" "<<endl;
    cout<<" "<<" "<<key<<key<<key<<" "<<" "<<endl;
    cout<<" "<<key<<key<<key<<key<<key<<" "<<endl;
    cout<<key<<key<<key<<key<<key<<key<<key<<endl;
    
    
    //Exit
    
    return 0;
}

