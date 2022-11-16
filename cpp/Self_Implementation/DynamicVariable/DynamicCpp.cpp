#include<iostream>

using namespace std;

int main() {
    int nRows = 10;
    int nCols = 10;
    int arr1[10][10];
    cout << "Size of arr1: " << sizeof(arr1) << endl;
    for(int i=0; i<nRows; i++) {
        for(int j=0; j<nCols; j++) {
            cout << arr1[i][j] << "-";
        }
        cout << endl;
    }

    int **arr = new int*[nRows]();
    for(int i=0; i<nRows; i++) {
        arr[i] = new int[nCols]();
    }

    cout << "Size of arr: " << sizeof arr << endl;
    for(int i=0; i<nRows; i++) {
        for(int j=0; j<nCols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<nRows; i++) {
        delete []arr[i];
    }
    delete []arr;
}