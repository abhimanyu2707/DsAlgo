#include<iostream>
#include<unordered_map>

using namespace std;

void show(unordered_map<string, int> um, string s) {
    cout << s << ": ";
    for (auto it = um.begin(); it != um.end(); it++) {
        cout << "(" << it->first << ", " << it->second << ") ";
    }
    cout << endl;
}

int main() {
    unordered_map<string, int> um;
    um["one"] = 1;
    um["two"] = 2;
    um.insert(std::make_pair<string, int>("three", 3));

    show(um, "Initial map");
}
