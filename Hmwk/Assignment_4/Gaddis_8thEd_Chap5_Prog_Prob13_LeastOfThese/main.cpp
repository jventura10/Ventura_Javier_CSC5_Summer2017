/* 
 * File:   main.cpp
 * Author: Jave
 * Purpose: Find the largest and smallest of the series user enters
 * Created on July 8, 2017, 1:01 AM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    int largest,small; //Largest and smallest from series
    int number; //numbers entered from user, will be compared to get small,large
    
    //Prompt For Data 
    cout<<"Enter all the integers you want in a series.";
    cout<<"This Program finds the smallest and largest in the series."<<endl;
    cout<<"To see result enter -99 and program will exit"<<endl;
    cin>>number;

    //Set equal to number so as user enters number
    //it will be compared to the number that is so far the largest and smallest
    largest=small=number;
    
    //Set Loop
    do{
        if(number>largest){
            largest=number;
        }
        if(number<small){
            small=number;
        }
        cin>>number;
    }while(number != -99);
    
    //Output Data
    cout<<"The largest number from the series is "<<largest<<endl;
    cout<<"The smallest number from the series is "<<small<<endl;
    
    return 0;
}

