/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2021, 10:10 AM
 * Purpose:  Sorting 3 Numbers
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cstdlib>    //Random Function
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set the random number Seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare variables here
    int num1,num2,num3;
    
    //Initialize variables here
    num1=rand()%3+1;//[1,2,3]
    num2=rand()%3+1;//[1,2,3]
    num3=rand()%3+1;//[1,2,3]
    
    
    //Map inputs to outputs here, i.e. the process
    cout<<"Sort the 3 numbers"<<endl;
    cout<<"The first number = "<<num1<<endl;
    cout<<"The second number = "<<num2<<endl;
    cout<<"The third number = "<<num3<<endl;
    cout<<"Output the sorted order"<<endl;
    if(num1<=num2 && num2<=num3){
        cout<<num1<<" "<<num2<<" "<<num3<<endl;
    }else if(num1<=num3 && num3<=num2){
        cout<<num1<<" "<<num3<<" "<<num2<<endl;
    }else if(num2<=num1 && num1<=num3){
        cout<<num2<<" "<<num1<<" "<<num3<<endl;
    }else if(num2<=num3 && num3<=num1){
        cout<<num2<<" "<<num3<<" "<<num1<<endl;
    }else if(num3<=num1 && num1<=num2){
        cout<<num3<<" "<<num1<<" "<<num2<<endl;
    }else{
        cout<<num3<<" "<<num2<<" "<<num1<<endl;
    }
    
    //Display the results

    return 0;
}