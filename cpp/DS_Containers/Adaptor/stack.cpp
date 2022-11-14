#include<iostream>
#include<stack>

using namespace std;

void show(stack<int> s, string const str = "") {
    cout << str << ": ";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    show(s, "Initial Stack");
    s.pop();
    show(s, "After pop");
}
