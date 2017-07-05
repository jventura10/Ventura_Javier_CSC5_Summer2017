/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Program compares the area of two rectangles
 * Created on July 1, 2017, 10:51 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float length1,width1; //Length and width for rectangle 1, float ranges
    float length2,width2; //Length and width for rectangle 2, float ranges
    float area1,area2;    //Area for rectangles 1 and 2, float ranges
    
    //Prompt for data
    cout<<"This program compares the area of two rectangles."<<endl;
    cout<<"Enter Length and Width,in your own units, no commas,";
    cout<<"press enter after each."<<endl;
    cin>>length1>>width1;
    cout<<"Enter Length and Width of rectangle 2,press enter after each"<<endl;
    cin>>length2>>width2;
    
    //Process Data
    area1=length1*width1;
    area2=length2*width2;
    
    //Set Conditional Operator and Output Data
    if(area1>area2) {
        cout<<"The area for rectangle 1 is: "<<area1<<" and for rectangle 2: ";
        cout<<area2<<". Area 1 is greater than Area 2."<<endl;
    }
    if(area2>area1) {
        cout<<"The area for rectangle 2 is: "<<area2<<" and for rectangle 1: ";
        cout<<area1<<". Area 2 is greater than Area 1."<<endl;
    }
    if(area1==area2) {
        cout<<"The area for both rectangles = "<<area1<<"."<<endl;
    }
    
    return 0;
}

