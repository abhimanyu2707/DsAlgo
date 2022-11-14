#include<iostream>
#include<queue>
#include<vector>

using namespace std;

void show(priority_queue<int> q, string s = "") {
    cout << s << ": ";
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

void showNeg(priority_queue<int> q, string s = "") {
    cout << s << ": ";
    while (!q.empty()) {
        cout << -q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    vector<int> v {61, 3, 15, 38, 98, 11, 0};
    priority_queue<int> q(v.begin(), v.end());
    show(q, "Default max queue");

    int arr[] = {61, 3, 15, 38, 98, 11, 0};
    for(int i=0; i<7; i++) {
        arr[i] = -arr[i];
    }
    priority_queue<int> qMin(arr, arr+7);
    showNeg(qMin, "Min priority queue");
}
