/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2022, 11:20 AM
 * Purpose:  Order N^2 Sorting Algorithm
 *           or NP if desired
 *           Using Structures
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstdlib>   //Random Library
#include <ctime>     //Time Library
using namespace std;

//User Defined Libraries
#include "Array1D.h"

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes
void fillAry(Array1D &);
void prntAry(const Array1D &,int);
void mrkSort(Array1D &);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int data[SIZE];
    Array1D array;
    
    //Initialize Variables
    array.size=SIZE;
    array.data=data;
    fillAry(array);
    
    //Display the outputs
    prntAry(array,10);
    
    //Map the inputs/known to the outputs
    mrkSort(array);
    
    //Display the outputs
    prntAry(array,10);

    //Exit the program
    return 0;
}

void mrkSort(Array1D &a){
    for(int pos=0;pos<a.size-1;pos++){
        for(int i=pos+1;i<a.size;i++){
            if(a.data[pos]>a.data[i]){
                a.data[pos]=a.data[pos]^a.data[i];
                a.data[i]=a.data[pos]^a.data[i];
                a.data[pos]=a.data[pos]^a.data[i];
            }
        }
    }
}

void prntAry(const Array1D &a,int perLine){
    cout<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void fillAry(Array1D &a){
    for(int i=0;i<a.size;i++){
        a.data[i]=rand()%90+10;
    }
}