/*
deque is a dinamic array like vector and can grow in both the direction.
*/
#include<iostream>
#include<deque>
#include<string>
using namespace std;

void show(deque<int> &d, string s = "") {
    cout << s << ": ";
    for(deque<int>::iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    deque<int> d = {13, 1, 3};
    d.push_back(7);
    show(d, "Push 7");
    d.push_front(99);
    show(d, "Push 99 front");
    cout<<"Index access d[1]: " << d[1] << endl;
}
