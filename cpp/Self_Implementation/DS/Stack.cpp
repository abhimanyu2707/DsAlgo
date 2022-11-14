#include<iostream>
#define STACK_SIZE 100
using namespace std;

class Stack {
    int arr[STACK_SIZE];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(int i);
    int pop();
    int peek();
    bool empty();
    bool full();
};

bool Stack::empty() {
    return top == -1;
}

bool Stack::full() {
    return top == STACK_SIZE-1;
}

void Stack::push(int i) {
    if (!full()) {
        top++;
        arr[top] = i;
    }
}

int Stack::pop() {
    if (top >= 0) {
        return arr[top--];
    }
    return -1;
}

int Stack::peek() {
    if (top >= 0) {
        return arr[top];
    }
    return -1;
}

int main() {
    Stack s;
    s.push(20);
    s.push(10);
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    return 0;
}