/* 
 * File:   RowAray.h
 * Author: Dr. Mark E. Lehr
 * Created on February 22nd, 2018, 8:36 PM
 * Specification for the RowAray
 */

#ifndef ROWARAY_H
#define	ROWARAY_H

class RowAray{
    private:
        int size;
        int *rowData;

    public:
        RowAray(int numCols) {
            size = numCols;

            // Create the row of size numCols
            rowData = new int[numCols];

            // Add random values to array
            for (int i = 0; i < numCols; ++i) {
                rowData[i] = rand() % 90 + 10;
            }
        }

        // Destructor
        ~RowAray() { delete rowData; }
        int getSize() { return size; }
        int getData(int i) { return rowData[i]; }
};

#endif	/* ROWARAY_H */