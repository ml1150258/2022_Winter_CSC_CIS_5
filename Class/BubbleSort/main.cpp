/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 3rd, 2022, 11:50 AM
 * Purpose:  Order N^2 Sorting Algorithm
 *           or NP if desired
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void mrkSrt1(int [],int);
void bublSrt(int [],int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);
    
    //Map the inputs/known to the outputs
    //mrkSrt3(array,SIZE);
    bublSrt(array,SIZE);
    
    //Display the outputs
    prntAry(array,SIZE,10);

    //Exit the program
    return 0;
}

void bublSrt(int a[],int n){
    bool swap;
    do{
        swap=false;
        n--;
        for(int i=0;i<n;i++){
            if(a[i]>a[i+1]){
                swap=true;
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }while(swap);
}

void mrkSrt1(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        for(int i=pos+1;i<n;i++){
            if(a[pos]>a[i]){
                int temp=a[pos];
                a[pos]=a[i];
                a[i]=temp;
            }
        }
    }
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}