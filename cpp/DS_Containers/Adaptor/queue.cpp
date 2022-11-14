#include<iostream>
#include<queue>

using namespace std;

//Can't iterate on queue
void show(queue<int> q, string s = "") {
    cout << s << ": ";
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    q.push(20);
    q.push(10);
    q.push(1);
    q.push(2);
    q.push(3);
    show(q, "Initial queue");
    q.emplace(99);
    show(q, "emplace 99");
    cout << "queu size: " << q.size() << endl;
}
