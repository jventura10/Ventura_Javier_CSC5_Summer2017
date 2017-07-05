/* 
 * File:   main.cpp
 * Author: Jay
 * Purpose: Awards Points based on the books bought.
 * Created on July 2, 2017, 6:02 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float bksPur; //Books Purchased in a month, float range, but bksPur[0,2M]
    
    //Prompt For Data
    cout<<"Calculate your added points by entering how many books ";
    cout<<"you have bought this month."<<endl;
    cin>>bksPur;
    
    //Set Conditional Statement 
    if(bksPur==0)
    {
        cout<<"Sorry,you have not earned any points this month."<<endl;
    }
    
    else if(bksPur==1)
    {
        cout<<"You have earned 5 points this month."<<endl;
    }
   
    else if(bksPur==2)
    {
        cout<<"You have earned 15 points this month."<<endl;
    }
    
    else if(bksPur==3)
    {
        cout<<"You have earned 30 points this month."<<endl;
    }
    
    else if(bksPur>=4)
    {
        cout<<"You have earned 60 points this month."<<endl;
    }
    
    else
        cout<<"Sorry,Please enter how many books you bought this month."<<endl;
         
    return 0;
}

