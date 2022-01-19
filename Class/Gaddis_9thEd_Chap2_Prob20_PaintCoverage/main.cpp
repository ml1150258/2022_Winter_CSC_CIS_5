/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 22, 2021, 11:23 AM
 * Purpose:  Gaddis 9th Ed Chapter 2 Prob 20  Paint Coverage
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
    //Set random number seed once here
    
    //Declare variables here
    unsigned char length,//Length 0-200ft 
                  height;//Height 0-200ft
    float        srfArea,//Surface area painted ft^2
                  pntCan;//Coverage per can of paint ft^2
    unsigned char numCans;//Number of cans of paint
    
    //Initialize variables here
    length=100;   //100 feet
    height=6;     //6 feet
    pntCan=3.4e2f;//Paint coverage = 340 sq feet/can of paint
    
    //Map inputs to outputs here, i.e. the process
    srfArea=4*length*height;//Paint both sides twice
    numCans=srfArea/pntCan+1;
    
    //Display the results
    cout<<"Number of paint cans = "<<static_cast<int>(numCans)
            <<" to cover "<<srfArea<<" sq feet"<<endl;

    return 0;
}