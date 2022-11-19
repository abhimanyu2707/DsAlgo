#include<iostream>
#include<map>

using namespace std;

void show(map<string, int> m, string s = "") {
    cout << s << ": ";
    for(auto it = m.begin(); it != m.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }
    cout << endl;
}

int main() {
    map<string, int> m;
    m["hi"] = 10;
    m.insert(std::pair<string, int>("ele", 20));
    show(m, "Initial map");
    m.erase("hi");
    show(m, "Erased");
}
