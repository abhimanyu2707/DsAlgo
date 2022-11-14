/*
list is a doubly linked list structure.
*/
#include<iostream>
#include<string>
#include<list>

using namespace std;

void show(list<int> &l, string s = "") {
    cout << s << ": ";
    for(auto ele : l) {
        cout << ele << " ";
    }
    cout << endl;
}


int main() {
    list<int> l = {3, 8, 1};
    show(l, "Created");
    l.assign(2, 51);
    show(l, "Assigned");
    l.push_back(30);
    show(l, "push_back");
    l.push_front(70);
    show(l, "push_front");

    l.sort();
    show(l, "Sorted");

}
