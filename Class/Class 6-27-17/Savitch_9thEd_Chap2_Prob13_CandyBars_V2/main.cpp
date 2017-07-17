/* 
 * File:   main.cpp
 * Author: Javier Ventura
 * Purpose: This Program Calculates the BMR of a man or woman
 * Created on June 27, 2017, 11:10 AM
 */

#include <iostream> //Input-Output Library
#include <cstdlib>  //Library with the Random Number Generator
#include <ctime>

using namespace std; //Name-Space under which system libraries exist

int main(int argc, char** argv) {
    
    //Setting the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char sex,nCdyBar;
    unsigned short wt,age,ht,bmr;
    unsigned int cndyCal=230; //230 calories for a chocolate candy
    
    //Randomly Generate the Data
    wt=rand()%221+80; //[80,300]
    age=rand()%55+18; //[18,72]
    ht=rand()%25+56; //[56,80]
    sex=rand()%2*7+70; //70 = char F, 77 = char M
    
    //Input Data
    //cout<<"Calculate how many candy bars you can eat/day?"<<endl;
    //cout<<"Input your Weight (lbs), Height(in), and Age(yrs)"<<endl;
    //cin>>wt>>ht>>age;
    //cout<<"Input your sex M/F"<<endl;
    //cin>>sex;
    
    //Map inputs to outputs or process data
    bmr=(sex=='F')?
        655+4.3*wt+4.7*ht-4.7*age:
         66+6.3*wt+4.9*ht-6.8*age;
    nCdyBar=bmr/cndyCal;
    
    //Output Transformed Data
    cout<<"Given sex="<<sex<<" wt="<<wt<<"(lbs) ht="<<ht<<"(in) age="
            <<age<<"(yrs)"<<" BMR="<<bmr<<"(cals)"<<endl;
    cout<<"Your chocolate candy bar consumption per day = "
            <<static_cast<int>(nCdyBar)<<endl;
            
    
    //Exit Stage

    return 0;
}

