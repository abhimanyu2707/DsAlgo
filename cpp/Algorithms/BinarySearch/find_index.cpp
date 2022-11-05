#include<iostream>
#include<algorithm>

using namespace std;

void show(int * const arr, int arr_size) {
    for(int i=0; i<arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {100, 321, 432, 7, 30, 654, 2, 45, 30, 64};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before: ";
    show(arr, arr_size);

    sort(arr, arr+arr_size);

    cout << "Sorted array: ";
    show(arr, arr_size);

    cout << "30 is at index: " << lower_bound(arr, arr+arr_size, 30) - arr << endl;
    cout << "30 is at index: " << upper_bound(arr, arr+arr_size, 30) - arr << endl;

    return 0;
}
