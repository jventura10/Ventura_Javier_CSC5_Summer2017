/*
 * File:   main.cpp
 * Author: Jave
 * Purpose: Assignment 6 Menu With Problems
 * Created on July 23, 2017, 9:56 PM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <string.h>
#include <ctime>

using namespace std;


//Global Constants
const int DAYS=30;
const int MNTHS=3;
const int ROWS=20;
const int COLS=2*ROWS;

//Function Prototypes
void fillAry(char [][DAYS],int);
void prntAry(char [][DAYS],int);
void prntAry(int  [][MNTHS]);
char scorAry(char [][DAYS],int [][MNTHS]);
void ntrAry(char [],int);
void ntrAry(char [],char [],int,int);
void prtAry(char [],int);
char scrAry(char [],char [],char [],int);
void prtArry(int [], int);
int bubSrt(int [],int);
int sltSrt(int [],int);
void ptAry(char [][COLS],int);
void fAry(char [][COLS],int);
void glider(char [][COLS],int,int,int);
void rules(char [][COLS],char [][COLS],int);
int nghbor(char [][COLS],int,int,int);
void pause(int);
char ltGrds(float);

int main(int argc, char** argv) {
    //Declare Variables
    int oper;               //Operation for the math problem
    bool selection=true;

    //Initialize Loop
    do{
        cout<<endl;
        cout<<"Assignment 6 Menu!"<<endl;
        cout<<"Pick (1)Code 1 (2)Code 2 (3)Code 3 (4)Code 4 (5)Code 5 ";
        cout<<" (6)Code 6 (7)Code 7 (8)Code 8 (9)Code 9 (10)Quit Menu"<<endl;
        cin>>oper;
    
        switch(oper){
            case 1:{
                cout<<endl;
                cout<<"Gaddis 8thEd Chapter 7 Problem 1 Array Values"<<endl;
                cout<<endl;
                //Declare Variables
                const int SIZE=10; // Size of the array
                int small,large;  //The smallest and largest of the numbers
                int numAry[SIZE];  //Array holding the numbers

                //Prompt for Data
                cout<<"Enter ten positive numbers:"<<endl;
                for(int j=0;j<SIZE;j++){
                    cin>>numAry[j];
                }

                small=numAry[0]; //Replace method for smallest number
                large=numAry[0];    //Replace method for largest number

                for(int i=0;i<SIZE;i++){
                    if(numAry[i]>large){
                        large=numAry[i];
                    }
                }

                cout<<"The largest value is: "<<large<<endl;
                cout<<"The smallest value is: "<<small<<endl;
                break;
            }    
            case 2:{
                cout<<endl;
                cout<<"Gaddis 8thEd Chapter 7 Problem 4 Larger than N"<<endl;
                cout<<endl;
                //Declare Variables
                int SIZE;
                int n;
                int nAry[SIZE];
                int check;

                //Prompt for Data
                cout<<"Enter the number to compare the rest to (n): "<<endl;
                cin>>n;
                cout<<"Enter how many numbers you want to compare to N"<<endl;
                cin>>SIZE;

                cout<<"Enter the numbers:"<<endl;
                for(int j=0;j<SIZE;j++){
                    cin>>nAry[j];
                    if(nAry[j]>n){
                        cout<<nAry[j]<<" is greater than "<<n<<endl;
                        cout<<endl;
                    }
                }
                break;
            }    
            case 3:{
                cout<<endl;
                cout<<"Gaddis 8thEd Chapter 7 Problem 6 RCS"<<endl;
                cout<<endl;
                //Set the random number seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare variables
                char data[MNTHS][DAYS];
                int  stat[MNTHS][MNTHS]={};

                //Initialize variables
                fillAry(data,MNTHS);

                //Map inputs to outputs or process the data
                scorAry(data,stat);

                //Output the transformed data
                prntAry(data,MNTHS);
                prntAry(stat);

                //Exit stage right!
                break;
            }    
            case 4:{
                cout<<endl;
                cout<<"Gaddis 8thEd Chapter 7 Problem 10 DMV Test"<<endl;
                cout<<endl;
                //Set Random Number Seed
                srand(static_cast<unsigned int>(time(0)));

                //Declare all Variables Here
                const int SIZE=40;
                char pass=0.75f*SIZE;
                char key[SIZE],answer[SIZE],cW[SIZE];
                char percent=60; //Bias the answers,realize starts with 25%

                //Input Variables
                ntrAry(key,SIZE);
                ntrAry(key,answer,SIZE,50);

                //Map Inputs
                char scre=scrAry(key,answer,cW,SIZE);

                //Output Data
                prtAry(key,SIZE);
                prtAry(answer,SIZE);
                prtAry(cW,SIZE);
                cout<<" "<<endl;
                cout<<"You received a scre of "<<static_cast<int>(scre);
                cout<<"/"<<SIZE<<((scre>=pass)?" Pass":" Fail")<<endl;
                break;
            }    
            case 5:{
                cout<<endl;
                //Declare Variables
                string stname[7]; //String to hold Names
                float tstscr[5][4]; //Take test scores
                char grades[5]; //Letter grade for test average
                float tstavg[5]; //Tests Average

                for(int i=0;i<5;i++){
                    cout<<"\nEnter "<<(i+1)<<" student "<<" name: ";
                    cin>>stname[i];

                    cout<<"Enter their 4 test scores, Press enter after each: ";
                    for(int j=0;j<4;j++){
                        cin>>tstscr[i][j];
                        while(tstscr[i][j]>100||tstscr[i][j]<0){
                            cout<<"\nTest Score should be between 0 and 100"<<endl;
                            cout<<"Enter test score: ";
                            cin>>tstscr[i][j];
                        }
                    }
                }

                for(int i=0;i<5;i++){
                    tstavg[i]=0;
                    for(int j=0;j<4;j++){
                        tstavg[i]+=tstscr[i][j];
                        tstavg[i]=tstavg[i]/4.0;
                    }
                    grades[i]=ltGrds(tstavg[i]);
                }

                cout<<"Student name\tAverage Score\tLetter Grade"<<endl;

                for(int i=0;i<5;i++){
                    cout<<fixed<<setprecision(2)<<showpoint;
                    cout<<stname[i]<<"\t\t"<<tstavg[i]<<"\t\t"<<grades[i]<<endl;
                }
                break;
            }    
            case 6:{
                cout<<endl;
                cout<<"Gaddis 8thEd Chapter 8 Problem 2 Lottery Winners"<<endl;
                cout<<endl;
                const int NUM_TIX=10;
                //Declare Variables
                //Numbers that the problem says to store 
                unsigned int tickets[10]= { 13579, 26791, 26792, 33445, 55555,
                                            62483, 77777, 79422, 85647, 93121};
                unsigned int winning;    //Winning NUmber


                //Prompt
                cout<<"Enter this week's winning number: ";
                cin>>winning;

                //Search Through player's tickets to see if they have winning #
                //Using Linear Search
                bool won = false;
                for(int i=0; i<NUM_TIX;i++){
                    if(tickets[i]== winning){
                        cout<<"You are a Winner!"<<endl;
                        won = true;
                    }
                }


                if(won == false){
                    cout<<"Sorry, You are not a Winner";
                }
                break;
            }    
            case 7:{
                cout<<endl;
                cout<<"Gaddis 8thEd Chapter 8 Problem 3 Lottery Winners ";
                cout<<" Enhancement"<<endl;
                cout<<endl;
                const int NUM_TIX=10;
    
                //Declare Variables
                //Numbers the problem says to store
                unsigned int tickets[10]= { 13579, 26791, 26792, 33445, 55555,
                                            62483, 77777, 79422, 85647, 93121};
                unsigned int winning; //Winning Numbers

                //Prompt
                cout<<"Enter this week's winning number: ";
                cin>>winning;

                //Search Through player's tickets to see if they have winning #
                //Using Binary Search 
                int min_index =0, max_index = NUM_TIX-1;
                int index;
                bool won = false;
                do{
                    index = (max_index - min_index)/2.0 + min_index;
                    if(tickets[index]>winning){
                        max_index=index;
                    }
                    else if(tickets[index]<winning){
                        min_index=index;
                    }
                    else if(tickets[index] == winning){
                        won= true;
                    }   
                }while(max_index > (min_index) && !won);

                if(won){
                    cout<<"You are a Winner";
                }
                else{
                    cout<<"You are not a Winner, Sorry";
                }
                break;
            }
            case 8:{
                cout<<endl;
                cout<<"Gaddis 8thEd Chapter 8 Problem 8 Sorting Benchmarks"<<endl;
                cout<<endl;
                
                const int N=100;

                int A[N];
                for(int i=0;i<N;i++){
                    A[i]=rand()%1000;
                }

                cout<<"Before Sorting: "<<endl;
                prtArry(A,N);

                int B[N];
                for(int i=0;i<N;i++){
                    B[i]=rand()%1000;
                }

                //Bubble Sort
                int bubSrtC = bubSrt(A,N);

                //Selection Sort
                int slctSC = sltSrt(A,N);

                cout<<"\nAfter Sorting: "<<endl;
                prtArry(B,N);

                //Print out counts of swaps
                cout<<"BubbleSort used: "<<bubSrtC<<" swaps."<<endl;
                cout<<"SelectionSort used: "<<slctSC<<" swaps."<<endl;
                break;
            }
            case 9:{
                cout<<endl;
                cout<<"Savitch Chapter 7 Problem 13 Game of Life"<<endl;
                cout<<endl;
                //Declare Variables 
                char lifeOdd[ROWS][COLS],lifeEvn[ROWS][COLS];
                int lives=50;

                //Initialize Variables
                fAry(lifeOdd,ROWS);

                //Input Data
                glider(lifeOdd,ROWS,1,1);

                //Output Data
                ptAry(lifeOdd,ROWS);
                cout<<"Generation = "<<0<<endl;

                  //Play the Game of Life
                for(int nGen=1;nGen<=lives;nGen+=2){
                    //Generate Next in Sequence 
                    rules(lifeOdd,lifeEvn,ROWS);

                    //Output Data
                    cout<<"Generation = "<<nGen<<endl;
                    ptAry(lifeEvn,ROWS);

                    //Generate Next in Sequence 
                    rules(lifeEvn,lifeOdd,ROWS);

                    //Output Data
                    cout<<"Generation = "<<nGen<<endl;
                    ptAry(lifeOdd,ROWS);
                }
                break;
            }
            case 10:{
                cout<<endl;
                cout<<"Quitting Menu :("<<endl;          
                return 0;
            }    
            default:{
                cout<<"Please enter a valid response."<<endl;
            }
        }
       
    }while(selection=true);
    
    return 0;
}

char scorAry(char data[][DAYS],int stat[][MNTHS]){
    char climate[]={'R','C','S'};
    for(int mnth=0;mnth<MNTHS;mnth++){
        for(int day=0;day<DAYS;day++){
            for(int clim=0;clim<MNTHS;clim++){
                if(data[mnth][day]==climate[clim]){
                    stat[mnth][clim]++;
                }
            }
        }
    }
}

void prntAry(int stat[][MNTHS]){
    char months[3][8]={"June   ","July   ","August "};
    cout<<"         R   C   S"<<endl;
    for(int mnth=0;mnth<MNTHS;mnth++){
        cout<<months[mnth];
        for(int rcs=0;rcs<MNTHS;rcs++){
            cout<<setw(3)<<stat[mnth][rcs]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"R -> Rainy"<<endl;
    cout<<"C -> Cloudy"<<endl;
    cout<<"S -> Sunny"<<endl;
}

void prntAry(char data[][DAYS],int mnths){
    char months[3][8]={"June   ","July   ","August "};
    cout<<"Climate for 3 summer months"<<endl;
    for(int mnth=0;mnth<mnths;mnth++){
        cout<<months[mnth];
        for(int day=0;day<DAYS;day++){
            cout<<data[mnth][day]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void fillAry(char data[][DAYS],int mnths){
    char climate[]={'R','C','S'};
    for(int mnth=0;mnth<mnths;mnth++){
        for(int day=0;day<DAYS;day++){
            data[mnth][day]=climate[rand()%3];
        }
    }
}

void ntrAry(char key[],char ans[],int n,int percent){
    for(int i=0;i<n;i++){
        if((rand()%100+1)<=percent){
            ans[i]=key[i];
        }
        else{
            ans[i]=rand()%4+'A';
        }
    }
}

char scrAry(char key[],char ans[],char cW[],int n){
    int scre=0;
    for(int i=0;i<n;i++){
        if(key[i]==ans[i]){
            scre++;
            cW[i]='C';
        }
        else{
            cW[i]=key[i]+32;
        }
    }
    return scre;
}

void prtAry(char a[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        
    }
    cout<<endl;
}

void ntrAry(char a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%4+'A';
    }
}

void prtArry(int A[],int SIZE){
    for(int i=0;i<SIZE;i++){
        cout<<A[i]<<" "<<endl;
    }
}

int bubSrt(int A[], int SIZE){
    int num_swaps=0;
    int temp;
    for(int i=0; i<SIZE-1;i++){
        for(int j=i+1;j<SIZE;j++){
            if(A[i]>A[j]){
                A[i]=A[j];
                A[j]=temp;
                
                num_swaps++;
            }
        }
    }
    return num_swaps;
}

int sltSrt(int A[],int SIZE){
    int num_swaps=0;
     
    for(int i=0;i<SIZE-1;i++){
        int min_index = i;
        for(int j=i+1;j<SIZE;j++){
                if(A[j]<A[min_index]){
                    min_index=j;
                }
             
        }
        if(min_index!=i){
            int temp=A[i];
            A[i] = A[min_index];
            A[min_index]=temp;
            
            num_swaps++;    
        }
    }
    return num_swaps;
}

void pause(int secs){
    int beg=static_cast<unsigned int>(time(0));
    int end;
    do{
        end=static_cast<unsigned int>(time(0));
    }while(end-beg<secs);
}

void rules(char arr1[][COLS],char arr2[][COLS],int rows){
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            int nNghbor=nghbor(arr1,ROWS,row,col);
            if(nNghbor<=1||nNghbor>4){arr2[row][col]=' ';
            }
            else if(nNghbor==3){arr2[row][col]='X';
            }
            else if(nNghbor==2||nNghbor==3){arr2[row][col]=arr1[row][col];
            }
        }
    }
}

int nghbor(char array[][COLS],int ROWS,int row, int col){
    int count=0;
    if(array[row-1][col-1]  =='X'){count++; //Left Upper COrner
    }
    if(array[row-1][col]    =='X'){count++; //Above
    }
    if(array[row-1][col+1]  =='X'){count++; //Right Upper Corner
    }
    if(array[row][col-1]    =='X'){count++; //Left
    }
    if(array[row][col+1]    =='X'){count++; //Right
    }
    if(array[row+1][col-1]  =='X'){count++; //Left Lower Corner
    }
    if(array[row+1][col]    =='X'){count++; //Below
    }
    if(array[row+1][col+1]  =='X'){count++; //Right Lower Corner
    }
    return count;
}

void glider(char array[][COLS],int,int zRow,int zCol){
    array[zRow][zCol+1]='X';
    array[zRow+1][zCol+2]='X';
    array[zRow+2][zCol]='X';
    array[zRow+2][zCol+1]='X';
    array[zRow+2][zCol+2]='X';
}

void ptAry(char array[][COLS],int rows){
    cout<<endl;
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            cout<<array[row][col];
        }
        cout<<endl;
    }
    cout<<endl;
    pause(1);
}

void fAry(char array[][COLS],int rows){
    for(int row=0;row<rows;row++){
        for(int col=0;col<COLS;col++){
            array[row][col]=' ';
        }
    }
}

char ltGrds(float score){
    if(score>= 90 && score<=100){
        return 'A';
    }
    else if(score >=80 && score<90){
        return 'B';
    }
    else if(score >=70 && score<80){
        return 'C';
    }
    else if(score >=60 && score<70){
        return 'D';
    }
    else{
        return 'F';
    }
}