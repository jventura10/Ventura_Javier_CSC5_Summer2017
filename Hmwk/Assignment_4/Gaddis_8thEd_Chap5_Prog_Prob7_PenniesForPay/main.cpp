/* 
 * File:   main.cpp
 * Author: Jave
 * Purpose:Everyday pay is twice the pennies from day before.Display Total pay.
 * Created on July 9, 2017, 4:01 PM
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    unsigned int input; //The number of days to look at,entered by user
    float totPay,pay; //Total pay and pay per day, tot in dollar,pay in pennies
    
    //Prompt For Data
    cout<<"This Program calculates how much you would make,";
    cout<<"with double the pennies everyday,starting at one penny."<<endl;
    cout<<"Please enter the number of days for the working period."<<endl;
    cin>>input;
    
    //Input Validation
    if(input<0){
        cout<<"Error. Please Re-run and enter number of days."<<endl;
    }
    
    //Making Table of Earning Per day
    cout<<" "<<endl;
    cout<<"Earnings Per Day"<<endl;
    cout<<"----------------"<<endl;
    pay=1;
    
    //Set Loop
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int days=1;days<=input;days++){
        cout<<days<<" Day(s)      "<<pay<<" Pennies"<<endl;
        totPay += pay;
        pay += pay;
    }
    
    //Display total earnings in dollar amount
    cout<<"         "<<endl;
    cout<<"Total Pay for "<<input<<" days is $"<<totPay/100.00<<endl;

    return 0;
}

