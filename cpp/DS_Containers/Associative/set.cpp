#include<iostream>
#include<set>

using namespace std;

void show(set<int> s, string str = "") {
    cout << str << ": ";
    for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    set<int> s({4, 4, 4});
    show(s, "Repeated element in set");
    s.insert(11);
    s.insert(1);
    s.insert(1);
    s.insert(100);
    show(s, "Inserted");
    s.erase(1);
    show(s, "Erased");
    auto f = s.find(4);
    auto val = f != s.end() ? *f : -1;
    cout << "Find 4: " << val << endl; 
}
