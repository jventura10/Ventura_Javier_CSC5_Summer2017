/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: This program calculates the percentage of males and females.
 * Created on June 26, 2017, 11:03 PM
 */


//System Libraries
#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    //Declare Variables
    float numM;        //Number of males in the class
    float numF;        //Number of Females in the class
    float numC;        //Number of people in the class or females + males
    float perM;        //Percent of Males in the class
    float perF;        //Percent of Females in the class

    //Prompt For Data
    cout<< "This Program calculates the percentage of males "
            "and females in a class."<<endl;
    cout<< "Please enter the number of males and females in the class,"
            "press enter after each number."<<endl;
    cin>>numM>>numF;

    //Process Data
    numC=numM+numF;
    perM=(numM/numC)*100;
    perF=(numF/numC)*100;

    //Output Data
    cout<<"The percent of males in the class is: "<<perM<<"%."<<endl;
    cout<<"The percent of females in the class is: "<<perF<<"%."<<endl;

    return 0;
    
    //Exit


}

