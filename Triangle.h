/* 
 * File:   Triangle.h
 * Author: Dr. Mark E. Lehr
 * Created on February 22nd, 2018, 8:36 PM
 * Purpose:  Specification of a Triangular array from a Row Array
 */

#ifndef TRIANGLE_H
#define	TRIANGLE_H

#include "RowAray.h"

class Triangle{
    private:
        int szRow;
        RowAray **records;

    public:
        Triangle(int) {
            // Code...
        }

        ~Triangle() {
            // Code...
        }

        int getSzRow(){return szRow;}

        int getData(int , int) {
            // Code...
        }
};


#endif	/* TRIANGLE_H */