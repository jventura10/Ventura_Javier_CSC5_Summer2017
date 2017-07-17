/*
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: Assignment 5 Menu with Programming Challenges Included
 * Created on July 16, 2017, 6:15 PM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>
#include <cstdlib>

using namespace std;

//Global Constants
const float CNVPERC=100.00f;

//Function Prototypes
float calcRet(float,float,float);
float gSales(string);
void hSales(float,float,float,float); 
float nAcc(string);
void fLow(int,int,int,int,int);   
float fallD(int);
float kinEn(float,float);
float celsius(float);
int cToss(int);
float gPop(float,float,float);
float gPopV2(float,float,float,float,float);

int main(int argc, char** argv) {
    //Declare Variables
    int oper;              //Choice for what programming Challenge to view
    bool selection=true;

    //Initialize Loop
    do{
        
        cout<<"Assignment 5 Menu!"<<endl;
        cout<<"Pick a Programming Challenge to view: (1)Challenge 1 ";
        cout<<"(2)Challenge 3 (3)Challenge 4 (4)Challenge 5 (5)Challenge 6 ";
        cout<<"(6)Challenge 7 (7)Challenge 8 (8)Challenge 16 (9)Challenge 17";
        cout<<" (10)Quit Program "<<endl;
        cin>>oper;
    
        switch(oper){
            case 1:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Markup:"<<endl;
                cout<<endl;
                //Declare Variables
                float w;    //Markup Percentage
                float m;    //Retail Price
                float r;    //WholeSale cost

                //Prompt For Data
                cout<<"Given Markup Percentage and Wholesale cost,";
                cout<<"Retail Price will be displayed."<<endl;
                cout<<""<<endl;
                cout<<"Please enter the Wholesale cost, in dollar amount.";
                cout<<endl;
                cin>>w;
                cout<<"Please enter the Markup Percentage.Without Percent ";
                cout<<"Symbol."<<endl;
                cin>>m;

                //Output the Inputs to Confirm
                cout<<""<<endl;
                cout<<"Wholesale cost    = $"<<w<<endl;
                cout<<"Markup Percentage =  "<<m<<"%"<<endl;

                //Output Data From Function
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Retail Price      = $"<<calcRet(m,w,r)<<endl;
                cout<<""<<endl;
                break;
            }
            case 2:{
                cout<<endl;      
                cout<<"Gaddis 8th Ed. - Winning Division:"<<endl;
                cout<<endl;
                //Declare Variables
                float salesSE,salesNE,salesSW,salesNW; //Sales for each Division

                //Purpose
                cout<<"Do you Want to know the Highest Achieving Division?";
                cout<<endl;

                //Call Function
                salesSE=gSales("Southeast");
                salesNE=gSales("Northeast");
                salesSW=gSales("Southwest");
                salesNW=gSales("Northwest");
                hSales(salesSE,salesNE,salesSW,salesNW);
                cout<<""<<endl;
                break;
            }
            case 3:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Safest Driving Area:"<<endl;
                cout<<endl;
                //Declare Variables
                int accS,accN,accE,accW,accCe; //Sales for each Division

                //Purpose
                cout<<"Do you Want to know the Safest Area For Driving in your";
                cout<<" city?"<<endl;

                //Call Function
                accS=nAcc("South");
                accN=nAcc("North");
                accE=nAcc("East");
                accW=nAcc("West");
                accCe=nAcc("Central");
                fLow(accS,accN,accE,accW,accCe);
                cout<<""<<endl;
                break;
            }
            case 4:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Falling Distance:"<<endl;
                cout<<endl;
                //Declare Variables
                float dist;  //Distance object fell
                int timeF;   //Time for object to fall

                //Purpose
                cout<<"The distance an object falls, with certain time falling";
                cout<<" in seconds will be displayed."<<endl;

                //Set Loop
                for(timeF=1;timeF<=10;timeF++){
                    dist=fallD(timeF);
                    cout<<"Distance fallen at "<<timeF<<" second(s) is "<<dist;
                    cout<<" m."<<endl; 
                }
                cout<<""<<endl;
                break;
            }
            case 5:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Kinetic Energy:"<<endl;
                cout<<endl;
                //Declare Variables
                float mass=0;   //Mass in kg
                float vel=0;    //Velocity m/s
                float kinE;     //Kinetic Energy

                //Prompt For Data
                cout<<"Given mass and velocity, Kinetic Energy will be";
                cout<<" displayed."<<endl;
                cout<<"Please enter mass, in kg."<<endl;
                cin>>mass;
                cout<<"Please enter velocity in meters per second."<<endl;
                cin>>vel;

                //Call Function
                kinE=kinEn(mass,vel);

                //Outputting Distance 
                cout<<"Kinetic Energy: "<<kinE<<endl;
                cout<<""<<endl;
                break;
            }
            case 6:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Celsius Temperature Table:"<<endl;
                cout<<endl;
                //Declare Variables
                float fTemp=0;   //Fahrenheit Temperatures from 0-20
                float cTemp;   //Celsius Temperatures converted from Fahrenheit

                //Create Table
                cout<<"Celsius Temperature Table"<<endl;
                cout<<"-------------------------"<<endl;
                cout<<"Fahrenheit ---->  Celsius"<<endl;
                cout<<"-------------------------"<<endl;

                //Call Function
                for(int j=0;j<=20;j++){
                    cTemp=celsius(fTemp);
                    cout<<fixed<<setprecision(4)<<showpoint;
                    cout<<fTemp++<<setw(18)<<cTemp<<endl;
                }
                cout<<""<<endl;
                break;
            }
            case 7:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Coin Toss:"<<endl;
                cout<<endl;
                //Declare Variables
                unsigned int nTimes;  //# of times user wants to flip the coin
                unsigned int nTails=0,nHeads=0; //Number of heads and tails
                int result;                //The result of toss either 1 or 2
                int flip;             //Argument for cToss 

                //Prompt User for Number of Coin Tosses
                cout<<"How Many Times do You Want to flip the Coin?"<<endl;
                cin>>nTimes;

                //Set Loop
                for(unsigned int v=1;v<=nTimes;v++){
                    result=cToss(flip);
                    if(result==1){
                        nHeads++;
                    }
                    else if(result==2){
                        nTails++;
                    }
                }

                //Output Data
                cout<<endl;
                cout<<"Total Number of Heads: "<<nHeads<<endl;
                cout<<endl;
                cout<<"Total Number of Tails: "<<nTails<<endl;
                cout<<""<<endl;
                break;
            }
            case 8:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Population:"<<endl;
                cout<<endl;
                //Declare Variables
                float sPop;        //Starting Population
                float bRate,dRate; //Birth and Death Rate
                int numYrs;        //Number of Years ahead to predict population
                float newPop;      //New Size of Population  

                //Prompt For Data
                cout<<"This Program estimates population for the years,";
                cout<<" of your choosing."<<endl;
                cout<<"Enter the starting size of the population."<<endl;
                cin>>sPop;
                while(sPop<2){
                    cout<<"Starting Size must be greater than 2!"<<endl;
                    cin>>sPop;
                }

                cout<<"Now enter the Birth Rate of the Population"<<endl;
                cin>>bRate;
                while(bRate<0){
                    cout<<"Birth Rate must not be negative"<<endl;
                    cin>>bRate;
                }

                cout<<"Now enter the Death Rate of the Population"<<endl;
                cin>>dRate;
                while(dRate<0){
                    cout<<"Death Rate must not be negative!"<<endl;
                    cin>>dRate;
                }

                cout<<"Enter the number of years to display"<<endl;
                cin>>numYrs;
                while(numYrs<1){
                    cout<<"The number of years to display must be 1 or ";
                    cout<<"greater!"<<endl;
                    cin>>numYrs;
                }

                //Call Function
                for(int year=0;year<numYrs;year++){
                newPop=gPop(sPop,bRate,dRate);

                //Output Data
                cout<<fixed<<setprecision(0);
                cout<<endl;
                cout<<"The Population at the end of the year "<<(year+1)<<":";
                cout<<setw(15)<<newPop<<endl;
                 
                //Change Value of starting Population for next year
                sPop=newPop;
                }
                cout<<""<<endl;
                break;
            }
            case 9:{
                cout<<endl;
                cout<<"Gaddis 8th Ed. - Transient Population:"<<endl;
                cout<<endl;
                //Declare Variables
                float sPop;           //Starting Population
                float bRate,dRate;    //Birth and Death Rate
                int numYrs;       //Number of Years ahead to predict population
                float mPop,lPop;      //Population moving in and leaving
                float newPop;         //New Size of Population  

                //Prompt For Data
                cout<<"This Program estimates population, for the years,";
                cout<<" of your choosing, for a geographic area."<<endl;
                cout<<"Enter the starting size of the population."<<endl;
                cin>>sPop;
                while(sPop<2){
                    cout<<"Starting Size must be greater than 2!"<<endl;
                    cin>>sPop;
                }

                cout<<"Now enter the Birth Rate of the Population"<<endl;
                cin>>bRate;
                while(bRate<0){
                    cout<<"Birth Rate must not be negative"<<endl;
                    cin>>bRate;
                }

                cout<<"Now enter the Death Rate of the Population"<<endl;
                cin>>dRate;
                while(dRate<0){
                    cout<<"Death Rate must not be negative!"<<endl;
                    cin>>dRate;
                }

                cout<<"Roughly how many people move to the region a year?";
                cout<<endl;
                cin>>mPop;
                while(mPop<0){
                    cout<<"People moving into the area must not be a negative";
                    cout<<" number"<<endl;
                    cin>>mPop;
                }

                cout<<"Roughly how many people leave the region a year?"<<endl;
                cin>>lPop;
                while(lPop<0){
                    cout<<"People leaving the area must not be a negative ";
                    cout<<"number"<<endl;
                    cin>>lPop;
                }

                cout<<"Enter the number of years to display"<<endl;
                cin>>numYrs;
                while(numYrs<1){
                    cout<<"The number of years to display must be 1 or greater!";
                    cout<<endl;
                    cin>>numYrs;
                }

                //Call Function
                for(int year=0;year<numYrs;year++){
                newPop=gPopV2(sPop,bRate,dRate,mPop,lPop);

                //Output Data
                cout<<fixed<<setprecision(0);
                cout<<endl;
                cout<<"The Population at the end of the year "<<(year+1)<<":";
                cout<<setw(15)<<newPop<<endl;

                //Change Value of Start Population for next year
                sPop=newPop;
                }
                break;
            }
            case 10:{
                cout<<"Quitting Assignment 5 Menu :("<<endl;          
                return 0;
            }
            default:{
                cout<<"Please enter a valid response."<<endl;
                break;
            }
        }   
    }while(selection=true);
    
    return 0;
}

//******************************************************************************
//******************************************************************************
//                          Calculate Retail Price                            **
//Inputs:                                                                     ** 
//    mPer ->  Markup Percentage                                              **
//    wCost -> WholeSale Cost                                                 **
//Output:                                                                     **   
//    retP -> Retail Price                                                    **
//******************************************************************************
//******************************************************************************

float calcRet(float mPer,float wCost,float retP){
    return retP=(wCost*(mPer/CNVPERC))+wCost;
}

//******************************************************************************
//******************************************************************************
//                              Get Sales                                     **
//Inputs:                                                                     ** 
//   nDiv -> Name of Division                                                 **
//   qSales -> Quarter Sales                                                  **
//Output:                                                                     **   
//    qSales -> Quarter Sales                                                 **
//******************************************************************************
//******************************************************************************

float gSales(string nDiv){
    float qSales;
    while(true){
        cout<<"Enter the Quarter Sales for the four Divisions,";
        cout<<" in the order: Southeast,Northeast,Southwest,Northwest"<<endl;
        cin>>qSales;
        if(qSales<0){
            cout<<endl;
            cout<<"Sales for a quarter must be a positive number.";
            cout<<"Terminate Program and Re-Run."<<endl;
        }
        else{
            break;
        }
    }
    return qSales;
}

//******************************************************************************
//******************************************************************************
//                              Highest Sales                                 **
//Inputs:                                                                     ** 
//   qSE -> Quarterly Sales for Southeast                                     **
//   qNE -> Quarterly Sales for Northeast                                     **
//   qSW -> Quarterly Sales for Southwest                                     **
//   qNW -> Quarterly Sales for Northwest                                     **
//Output:                                                                     **   
//  qSE,qNE,qSW,qNW -> Division with highest sales and their dollar amount    **
//******************************************************************************
//******************************************************************************

void hSales(float qSE,float qNE,float qSW,float qNW){
    if(qSE >= qNE && qSE >= qNW && qSE >= qSW){
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<endl;
        cout<<"The Division with the highest sales is the 'Southeast' division";
        cout<<" with sales: $"<<qSE<<endl;
        cout<<"Good Job Southeast!"<<endl;
    }
    if(qNE >= qSE && qNE >= qNW && qNE >= qSW){
        cout<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Division with the highest sales is the 'Northeast' division";
        cout<<" with sales: $"<<qNE<<endl;
        cout<<"Good Job Northeast!"<<endl;
    }
    if(qSW >= qSE && qSW >= qNE && qSW >= qNW){
        cout<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Division with the highest sales is the 'Southwest' division";
        cout<<" with sales: $"<<qSW<<endl;
        cout<<"Good Job Southwest!"<<endl;
    }
    if(qNW >= qSE && qNW >= qNE && qNW >= qSW){
        cout<<endl;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Division with the highest sales is the 'Northwest' division";
        cout<<" with sales: $"<<qNW<<endl;
        cout<<"Good Job Northwest!"<<endl;
    }
}

//******************************************************************************
//******************************************************************************
//                              Number of Accidents                           **
//Inputs:                                                                     ** 
//   nArea -> Area within Major city                                          **
//   rAcc -> Reported Accidents in that Area                                  **
//Output:                                                                     **   
//   rAcc -> Reported Accidents in that Area                                  **
//******************************************************************************
//******************************************************************************

float nAcc(string nArea){
    int rAcc;
    while(true){
        cout<<"Enter the Number of Reported Accidents for last year in the";
        cout<<" Areas, in the order: South,North,East,West,Central"<<endl;
        cin>>rAcc;
        if(rAcc<0){
            cout<<endl;
            cout<<"Number of accidents must be a positive number.";
            cout<<"Terminate Program and Re-Run."<<endl;
        }
        else{
            break;
        }
    }
    return rAcc;
}

//******************************************************************************
//******************************************************************************
//                              Find Lowest                                   **
//Inputs:                                                                     ** 
//   qSE -> Quarterly Sales for Southeast                                     **
//   qNE -> Quarterly Sales for Northeast                                     **
//   qSW -> Quarterly Sales for Southwest                                     **
//   qNW -> Quarterly Sales for Northwest                                     **
//Output:                                                                     **   
//  qSE,qNE,qSW,qNW -> Division with highest sales and their dollar amount    **
//******************************************************************************
//******************************************************************************

void fLow(int S,int N,int E,int W,int Ce){
    if(S <= N && S <= E && S <= W && S <= Ce){
        cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'South' Area";
        cout<<" with "<<S<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(N <= S && N <= E && N <= W && N <= Ce){
      cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'North' Area";
        cout<<" with "<<N<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(E <= N && E <= S && E <= W && E <= Ce){
       cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'East' Area";
        cout<<" with "<<E<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(W <= N && W <= E && W <= S && W <= Ce){
        cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'West' Area";
        cout<<" with "<<W<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
    if(Ce <= N && Ce <= E && Ce <= W && Ce <= S){
        cout<<endl;
        cout<<"The Safest Driving Area in the city is in the 'Central' Area";
        cout<<" with "<<Ce<<" reported accidents last year."<<endl;
        cout<<"Safe Driving!"<<endl;
    }
}

//******************************************************************************
//******************************************************************************
//                            Falling Distance                                **
//Inputs:                                                                     ** 
//   timeFa ->  Time Fallen                                                   **
//Output:                                                                     **   
//    distFa -> Distance Fallen                                               **
//******************************************************************************
//******************************************************************************

float fallD(int timeFa){
    float distFa;
    float grav=9.80f;
    distFa=static_cast<float>(.5*grav*timeFa*timeFa);
    return distFa;
}

//******************************************************************************
//******************************************************************************
//                             Kinetic Energy                                 **
//Inputs:                                                                     ** 
//   mass ->  Mass                                                            **
//   vel ->   Velocity                                                        **
//Output:                                                                     **   
//    kE -> Kinetic Energy                                                    **
//******************************************************************************
//******************************************************************************

float kinEn(float m,float v){
    float kE;
    kE=(.5*m*v*v);
    return kE;
}

//******************************************************************************
//******************************************************************************
//                               Celsius                                      **
//Inputs:                                                                     ** 
//   F  ->  Fahrenheit Temperatures                                           **
//Output:                                                                     **   
//    C -> Celsius Temperatures                                               **
//******************************************************************************
//******************************************************************************

float celsius(float F){
    float C;
    C=((5.0/9.0)*(F-32.0));
    return C;
}

//******************************************************************************
//******************************************************************************
//                                 Coin Toss                                  **
//Inputs:                                                                     **
//    None -> Time is set and coin tosses occur                               **
//Output:                                                                     **   
//    Toss -> The toss of the coin                                            **
//******************************************************************************
//******************************************************************************

int cToss(int toss){
    //Randomize Toss
    toss=rand()%2+1;    //[1,2]
    if(toss==1){
        cout<<"Heads"<<endl;
    }
    else{
        cout<<"Tails"<<endl;
    }
    return toss;
}

//******************************************************************************
//******************************************************************************
//                              Get Population                                **
//Inputs:                                                                     ** 
//   P -> Population                                                          **
//   B -> Birth Rate                                                          **
//   D -> Death Rate                                                          **
//Output:                                                                     **   
//   N -> New Population                                                      **
//******************************************************************************
//******************************************************************************

float gPop(float P,float B,float D){
    float N;
    N=P+(B*P)-(D*P);
    return N;
}

//******************************************************************************
//******************************************************************************
//                              Get Population V2                             **
//Inputs:                                                                     ** 
//   P -> Population                                                          **
//   B -> Birth Rate                                                          **
//   D -> Death Rate                                                          **
//   M -> People Moving In                                                    **
//   L -> People Leaving                                                      **
//Output:                                                                     **   
//   N -> New Population                                                      **
//******************************************************************************
//******************************************************************************

float gPopV2(float P,float B,float D,float M,float L){
    float N;
    N=(P+(B*P)-(D*P))+M-L;
    return N;
}