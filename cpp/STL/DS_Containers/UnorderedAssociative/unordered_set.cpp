#include<iostream>
#include<unordered_set>

using namespace std;

void show(unordered_set<int> us, string s = "") {
    cout << s << ": ";
    for(auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    unordered_set<int> us = {4, 1, 3};
    show(us, "Initial set");

    cout << *us.find(1) << endl;
}
