/* 
 * File:   main.cpp
 * Author: Jay
 * Purpose:Program uses the character given and makes a diamond pattern.
 * Created on June 23, 2017, 7:45 PM
 */

//Include Libraries Here
#include <iostream>

using namespace std;



int main(int argc, char** argv) {

    //Declare all Variables Here
    char key; //Character can anything on keyboard like comma,number,letter
             
    
    //Initialize by input from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Diamond?"<<endl;
    cin>>key;
    
    
    //Output Transformed data
    cout<<" "<<" "<<" "<<key<<" "<<" "<<" "<<endl;
    cout<<" "<<" "<<key<<key<<key<<" "<<" "<<endl;
    cout<<" "<<key<<key<<key<<key<<key<<" "<<endl;
    cout<<key<<key<<key<<key<<key<<key<<key<<endl;
    cout<<" "<<key<<key<<key<<key<<key<<" "<<endl;
    cout<<" "<<" "<<key<<key<<key<<" "<<" "<<endl;
    cout<<" "<<" "<<" "<<key<<" "<<" "<<" "<<endl;
     
    //Exit
    
    return 0;
}