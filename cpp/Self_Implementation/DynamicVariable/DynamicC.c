#include<stdio.h>
#include<stdlib.h>

int main() {
    int nRows = 5, nCols = 10;
    int *arr[nRows];
    for(int i=0; i<nRows; i++) {
        arr[i] = (int *)malloc(nCols * sizeof(int));
    }
    for(int i=0; i<nRows; i++) {
        for(int j=0; j<nCols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<nRows; i++) {
        free(arr[i]);
    }

    int **arr1 = (int **) malloc(nRows * (sizeof(int*)) + nRows * nCols * sizeof(int));
    int *ptr = (int *)(arr1 + nRows);
    for(int i = 0; i < nRows; i++) {
        arr1[i] = ptr + i * nCols;
    }
    for(int i=0; i<nRows; i++) {
        for(int j=0; j<nCols; j++) {
            printf("%d-", arr1[i][j]);
        }
        printf("\n");
    }
    free(arr1);
    return 0;
}