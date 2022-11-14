#include<iostream>
#include<array>

using namespace std;

template <std::size_t N>
void show(array<int, N> &arr, string s = "") {
    cout << s << ": ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    array<int, 6> arr;
    show(arr, "Random size 6");
    arr.fill(0);
    show(arr, "Fill 0");
}
