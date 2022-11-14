#include<iostream>
#include<algorithm>
using namespace std;

void show(int *arr, int arr_size, string s = "") {
    cout << s << ": ";
    for(int i=0; i<arr_size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {10, 20, 43, 5, 31, 9, 0, 29, 54, 109};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    show(arr, arr_size, "Initial array");

    sort(arr, arr+arr_size);
    show(arr, arr_size, "Sorted");
    
    sort(arr, arr+arr_size, greater<int>());
    show(arr, arr_size, "Sorted desc");

    return 0;
}
