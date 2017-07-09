/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Uses integer 1-15 to create square display 
 * Created on July 8, 2017, 12:22 PM
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int num;        //This number will be the length and width of square [1,15]
    char letter= 'x';    //The square is made up of letter x, 
    
    //Prompt for Data
    cout<<"Please enter a positive integer from 1 to 15"<<endl;
    cin>>num;
    
    //Input Validation
    if(num>15 || num<1){
        cout<<"Error, Please enter an integer from 1 to 15."<<endl;
    }
    
    else{
        for(int row=1;row<=num;row++){
            cout<<string(num,letter)<<endl;
        }
            
    }

    return 0;
}

