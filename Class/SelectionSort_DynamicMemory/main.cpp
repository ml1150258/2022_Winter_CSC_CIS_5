/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 7th, 2022, 10:50 AM
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
int* fillAry(int);
void prntAry(int [],int,int);
void selSort(int [],int);
void swap3(int *,int *);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int size=100;
    int *array;
    
    //Initialize Variables
    array=fillAry(size);
    
    //Display the outputs
    prntAry(array,size,10);
    
    //Map the inputs/known to the outputs
    selSort(array,size);
    
    //Display the outputs
    prntAry(array,size,10);
    
    //Deallocate dynamic memory
    delete []array;

    //Exit the program
    return 0;
}

void selSort(int a[],int n){
    for(int pos=0;pos<n-1;pos++){
        int selIndx=pos;
        for(int i=pos+1;i<n;i++){
            if(*(a+selIndx)>*(a+i))selIndx=i;
        }
        swap3(a+selIndx,a+pos);
    }
}

void swap3(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void prntAry(int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

int *fillAry(int n){
    n=n>=2?n:2;//Make sure more than size 1 for array
    int *a=new int[n];//Dynamically create memory
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
    return a;
}