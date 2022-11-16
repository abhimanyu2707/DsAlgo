#include<iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

class Queue {
    Node *head, *tail;
public:
    Queue() {
        head = tail = NULL;
    }
    bool empty();
    void push(int i);
    int pop();
};

bool Queue::empty() {
    return head == NULL;
}

void Queue::push(int i) {
    Node *tmp = new Node();
    tmp->next = NULL;
    tmp->data = i;
    if(empty()) {
        head = tmp;
        tail = tmp;
    } else {
        tail->next = tmp;
        tail = tmp;
    }
}

int Queue::pop() {
    if (empty())
        return -1;
    int ret = head->data;
    Node * tmp = head;
    head = head->next;
    if (head == NULL)
        tail = NULL;
    delete tmp;
    return ret;
}

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
}