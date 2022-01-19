/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 7th, 2021, 11:02 AM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    int fact1,n;
    
    //Initialize variables here
    fact1=1;
    n=13;
    while(n<=0||n>12){
        cout<<"The current input is <=0 or >12"<<endl
                <<" Please input a number between 1 and 12"<<endl;
        cin>>n;
    }
    
    //Map inputs to outputs here, i.e. the process
    int i=1;
    do{
        fact1*=i++;
    }while(i<=n);
    
    //Display the results
    cout<<n<<"! = "<<fact1<<endl;

    return 0;
}