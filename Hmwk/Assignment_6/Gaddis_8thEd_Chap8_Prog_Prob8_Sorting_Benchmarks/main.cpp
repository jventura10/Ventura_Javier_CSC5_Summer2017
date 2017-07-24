/*
 * File:   main.cpp
 * Author: rcc
 * Purpose: Javier Ventura
 * Created on July 20, 2017, 1:13 PM
 */

#include <iostream>

using namespace std;

//Function Prototypes
void prtArry(int [], int);
int bubSrt(int [],int);
int sltSrt(int [],int);

int main(int argc, char** argv) {
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
    
    return 0;
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