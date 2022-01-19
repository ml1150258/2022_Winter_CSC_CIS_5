/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 24, 2021, 11:00 AM
 * Purpose:  Sea Level Rise
 */

//System Libraries
#include <iostream>   //Input/Output Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const float CNVMMIN=25.4;//Conversion mm to inches

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    float riseR8;//Sea level rise rate in mm/year
    unsigned char nYear1,nYear2,nYear3;//Years to investigate
    float rise1,rise2,rise3;//Three sea level increases
    
    //Initialize variables here
    riseR8=1.5;//Rise rate 1.5mm/year
    nYear1=5;
    nYear2=7;
    nYear3=10;
    
    //Map inputs to outputs here, i.e. the process
    rise1=riseR8*nYear1;
    rise2=riseR8*nYear2;
    rise3=riseR8*nYear3;
    
    //Display the results
    cout<<"Sea Level Rise Rate =  "<<riseR8<<" mm/year"<<endl;
    cout<<"Sea Level Rise in  "<<static_cast<int>(nYear1)
            <<" years =  "<<rise1<<" mm"<<endl;
    cout<<"Sea Level Rise in  "<<static_cast<int>(nYear2)
            <<" years = "<<rise2<<" mm"<<endl;
    cout<<"Sea Level Rise in "<<static_cast<int>(nYear3)
            <<" years = "<<rise3<<" mm"<<endl;

    return 0;
}