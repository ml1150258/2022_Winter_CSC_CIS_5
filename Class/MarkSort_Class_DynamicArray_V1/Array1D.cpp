/* 
 * File:   Array1D.h
 * Author: mlehr
 *
 * Created on February 10, 2022, 11:00 AM
 *      Implementation for the Array1D class
 */
#include <iostream>
using namespace std;

#include "Array1D.h"

Array1D::Array1D(int n){
    n=n>=2?n:2;
    size=n;
    data=new int[size];
    for(int i=0;i<size;i++){
        data[i]=rand()%90+10;
    }
}
        
void Array1D::prntAry(int perLine){
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
        
void Array1D::mrkSort(){
    for(int pos=0;pos<size-1;pos++){
        for(int i=pos+1;i<size;i++){
            if(data[pos]>data[i]){
                data[pos]=data[pos]^data[i];
                data[i]=data[pos]^data[i];
                data[pos]=data[pos]^data[i];
            }
        }
    }
}