/* 
 * File:   Table.h
 * Author: Dr. Mark E. Lehr
 * Created on February 22nd, 2018, 8:36 PM
 * Specification for the Table
 */

#ifndef TABLE_H
#define	TABLE_H

#include "RowAray.h"

class Table{
    private:
        int szRow;
        int szCol;
        RowAray **records;

    public:
        Table(int numRows, int numCols) {
            szRow = numRows; // 6
            szCol = numCols; // 8

            // Create the rowAray pointers
            records = new RowAray *[numRows];

            // Create the rows x cols array
            for (int i = 0; i < numCols; ++i) {
                records[i] = new RowAray(numCols);
            }
        }

        ~Table() { 
            for (int i = 0; i < szRow; ++i) {
                delete records[i];
            }

            delete [] records;
        }

        int getSzRow() { return szRow; }
        int getSzCol() { return szCol; }

        int getData(int row, int col) {
            return records[row]->getData(col);
        }
};

#endif	/* TABLE_H */