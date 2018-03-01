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
        Triangle(int numRows) {
            szRow = numRows;

            // Create the rowAray pointers
            records = new RowAray *[numRows];

            // Create rowAray arrays of size
            for (int i = 0; i < numRows; ++i) {
                records[i] = new RowAray(numRows);
            }
        }

        ~Triangle() {
            for (int i = 0; i < szRow; ++i) {
                delete records[i];
            }

            delete [] records;
        }

        int getSzRow(){return szRow;}

        int getData(int row, int col) {
            return records[row]->getData(col);
        }
};


#endif	/* TRIANGLE_H */