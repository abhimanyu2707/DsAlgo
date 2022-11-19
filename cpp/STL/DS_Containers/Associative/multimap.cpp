#include<iostream>
#include<map>

using namespace std;

void show(multimap<string, int> m, string s = "") {
    cout << s << ": ";
    for(auto it = m.begin(); it != m.end(); it++) {
        cout << "{" << it->first << ", " << it->second << "} ";
    }
    cout << endl;
}

int main() {
    multimap<string, int> m;
    m.insert(std::pair<string, int>("ele", 20));
    m.insert(std::pair<string, int>("ele", 2));
    m.insert(std::pair<string, int>("ele", 3));
    m.insert(std::pair<string, int>("from", 10));
    m.insert(std::pair<string, int>("to", 2));
    show(m, "Initial map");
    m.erase("ele");
    show(m, "Erased");
}
