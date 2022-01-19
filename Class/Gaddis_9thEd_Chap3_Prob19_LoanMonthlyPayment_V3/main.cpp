/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 2th, 2021, 10:50 AM
 * Purpose:  Monthly Loan Repayment Problem
 */

//System Libraries
#include <iostream>   //Input/Output Library
#include <cmath>      //Math Library
#include <iomanip>    //Format Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const unsigned char PERCENT=100;//Conversion to Percent
const float HALFPNY=0.005;//Half a penny, or half a cent!
const float CNVPNY=100.0F;//Conversion to pennies

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Declare variables here
    float      loan,//Loan Amount in $'s
            intRate,//Interest Rate in %
            mnPmnt, //Monthly Payment in $'s
            intPaid,//Interest paid during life of loan $'s
            totPaid;//Total paid on line in $'s
    unsigned char nCmpPds;//Number of compounding periods
    
    //Initialize variables here
    loan=1e4f;//$10000
    intRate=1e0f;//1%/month 12%/year
    nCmpPds=36;//36 months to payoff loan
    
    //Map inputs to outputs here, i.e. the process
    intRate/=PERCENT;//Change to decimal value
    float utility=pow(1+intRate,nCmpPds);
    mnPmnt=intRate==0?
        loan/nCmpPds:
        intRate*utility*loan/(utility-1);
    int ipmnt=(mnPmnt+HALFPNY)*CNVPNY;//Add a half penny shift left,val in cents
    mnPmnt=ipmnt/CNVPNY;//Shift back to the right 2 places, val in $'s
    totPaid=mnPmnt*nCmpPds;
    intPaid=totPaid-loan;
    
    //Display the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount:       $"<<setw(8)<<loan<<endl;
    cout<<"Monthly Interest    "<<setw(8)<<intRate*PERCENT<<"%"<<endl;
    cout<<"Number of Payments  "<<setw(5)
            <<static_cast<int>(nCmpPds)<<" months"<<endl;
    cout<<"Monthly Payment    $"<<setw(8)<<mnPmnt<<endl;
    cout<<"Total Paid         $"<<setw(8)<<totPaid<<endl;
    cout<<"Interest Paid      $"<<setw(8)<<intPaid<<endl;

    return 0;
}