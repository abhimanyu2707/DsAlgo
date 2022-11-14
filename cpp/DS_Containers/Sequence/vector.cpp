#include<iostream>
#include<vector>
#include<string>

using namespace std;

void show(vector<int> &v, string s = "") {
    cout << s << ": ";
    //can use for(auto ele : v)
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1;

    //MODIFIERS
    //Assign n, same elements
    v1.assign(2, 100);
    show(v1, "Assigned repeated");

    v1.push_back(21);
    show(v1, "Push 21");

    v1.insert(v1.begin() + 1, 55);
    show(v1, "Insert at pos 1");
    v1.insert(v1.begin() + 1, 2, 25);
    show(v1, "Insert 2 ele");

    v1.pop_back();
    show(v1, "pop_back");

    v1.erase(v1.end() - 1);
    show(v1, "Erase end-1");

    sort(v1.begin(), v1.end());
    show(v1, "Sorted");

    cout << "Back: " << v1.back() << endl;

    v1.clear();
    show(v1, "cleared");
}
