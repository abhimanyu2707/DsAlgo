#include<iostream>
#include<unordered_map>

using namespace std;

void show(unordered_multimap<string, int> um, string s) {
    cout << s << ": ";
    for (auto it = um.begin(); it != um.end(); it++) {
        cout << "(" << it->first << ", " << it->second << ") ";
    }
    cout << endl;
}

int main() {
    unordered_multimap<string, int> um;
    um.insert(std::make_pair<string, int>("one", 1));
    um.insert(std::make_pair<string, int>("two", 2));
    um.insert(std::make_pair<string, int>("three", 4));
    um.insert(std::make_pair<string, int>("three", 3));
    um.insert(std::make_pair<string, int>("three", 5));
    um.insert(std::make_pair("one", 100));
    show(um, "Initial map");

    um.erase(um.find("one"));
    show(um, "Erase");
}
