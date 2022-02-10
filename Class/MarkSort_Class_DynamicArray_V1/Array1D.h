/* 
 * File:   Array1D.h
 * Author: mlehr
 *
 * Created on February 9, 2022, 10:32 AM
 *      Specification for the Array1D class
 *      Prototype
 */

#ifndef ARRAY1D_H
#define ARRAY1D_H

class Array1D{
    private:
        int size;
        int *data;
    public:
        Array1D(int);
        ~Array1D(){
            delete []data;
        }
        void prntAry(int);
        void mrkSort();
};

#endif /* ARRAY1D_H */

