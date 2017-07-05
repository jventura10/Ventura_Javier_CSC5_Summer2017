/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: This program calculates how many widgets are on a pallet.
 * Created on June 28, 2017, 1:14 PM
 */

//System Libraries
#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
   //Declare Variables
    float wtPal;        //Weight of Pallet without any widgets on top in pounds
    float wtWid=12.5f;  //12.5 Lbs is what each individual widget weighs
    float wtTot;        //Total weight of pallet and widgets
    float totWid;       //Total weight minus the weight of pallet, only widgets
    float numWid;       //Number of Widgets on the pallet
    
    //Prompt for Data
    cout<<"This Program calculates how many widgets are on a Pallet."<<endl;
    cout<<"Enter the weight of the Pallet,in lbs,without any widgets.";
    cout<<"Press enter when done."<<endl;
    cin>>wtPal;
    cout<<"Enter the total weight,in lbs,with the widgets on the Pallet.";
    cout<<"Press enter when done."<<endl;
    cin>>wtTot;
    
    //Process Data
    totWid=wtTot-wtPal;
    numWid=totWid/wtWid;
    
    //Output Data
    cout<<"The number of widgets on the pallet is: "<<numWid<<endl;
    
    return 0;
    
    //Exit
}

