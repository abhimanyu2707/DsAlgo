#include<iostream>
#include<set>

using namespace std;

void show(multiset<int> s, string str = "") {
    cout << str << ": ";
    for (multiset<int>::iterator it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    multiset<int> ms;
    ms.insert(44);
    ms.insert(44);
    ms.insert(11);
    ms.insert(22);
    ms.insert(22);
    show(ms, "Initial multiset");
    auto it = ms.begin();
    next(it);
    next(it);
    next(it);
    ms.insert(it, 1);
    show(ms, "Insert using iterator");
    ms.erase(ms.lower_bound(22));
    show(ms, "Erase lower_bound");
}
