/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 2nd, 2022, 11:20 AM
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
void swap1(int &,int &);
void swap2(int &,int &);
void smlLst(int [],int,int);
void mrkSrt1(int [],int);
void mrkSrt3(int [],int);
void copyAry(int [],int [],int);

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100000;
    int array[SIZE];
    int brray[SIZE];
    
    //Initialize Variables
    fillAry(array,SIZE);
    copyAry(array,brray,SIZE);
    
    //Display the outputs
    //prntAry(array,SIZE,5);
    //prntAry(brray,SIZE,5);
    cout<<"Array Size = "<<SIZE<<endl;
    
    //Map the inputs/known to the outputs
    int beg=time(0);
    mrkSrt1(array,SIZE);
    int end=time(0);
    int tot1=end-beg;
    cout<<"Total time taken for 1 Function Sort = "
            <<tot1<<" seconds"<<endl;
    
    beg=time(0);
    mrkSrt3(brray,SIZE);
    end=time(0);
    int tot2=end-beg;
    cout<<"Total time taken for 3 Function Sort = "
            <<end-beg<<" seconds"<<endl;
    
    cout<<"1 Function vs. 3 Function is "
            <<100.0f*(tot2-tot1)/tot1
            <<" % more efficient"<<endl;
    
    //Display the outputs
    //prntAry(array,SIZE,5);
    //prntAry(brray,SIZE,5);

    //Exit the program
    return 0;
}

void copyAry(int a[],int b[],int n){
    for(int i=0;i<n;i++){
        b[i]=a[i];
    }
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

void mrkSrt3(int a[],int n){
    for(int i=0;i<n-1;i++){
        smlLst(a,n,i);
    }
}

void smlLst(int a[],int n,int pos){
    for(int i=pos+1;i<n;i++){
        if(a[pos]>a[i])swap1(a[pos],a[i]);
    }
}

void swap2(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void swap1(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
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
        a[i]=rand();
    }
}