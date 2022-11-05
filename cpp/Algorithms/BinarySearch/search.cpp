#include<iostream>
#include<algorithm>
using namespace std;

void show(int *arr, int arr_size) {
    for(int i=0; i<arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {10, 20, 43, 5, 31, 9, 0, 29, 54, 109};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting" << endl;
    show(arr, arr_size);

    sort(arr, arr+arr_size);

    cout << "Array after sorting" << endl;
    show(arr, arr_size);

    if(binary_search(arr, arr+arr_size, 9)) {
        cout << "9 is present in array" << endl;
    }

    return 0;
}
