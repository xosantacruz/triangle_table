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
            // Code...
        }

        ~Table() { 
            // Code...
        }

        int getSzRow() { return szRow; }
        int getSzCol() { return szCol; }

        int getData(int,int) {
            // Code..
        }
};

#endif	/* TABLE_H */