#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>

using namespace std;

void show(vector<int> v, string s) {
    cout << s << ": ";
    for(auto ele : v) {
        cout << ele << ", ";
    }
    cout << endl;
}

int main() {
    vector<int> v({5, 4, 17, 3, 9, 11, 22, 8});
    show(v, "Initial array");

    reverse(v.begin(), v.end());
    show(v, "Reversed");

    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Accumulated: " << accumulate(v.begin(), v.end(), 0) << endl;
}
