#include<iostream>
#include<unistd.h>

using namespace std;

int main() {
    int a = 5;
    if (fork() == 0) {
        a -= 5;
        cout << "Child a and address of a are: " << a << " ---- " << &a << endl;
    } else {
        a += 5;
        cout << "Parent a and address of a are: " << a << " ---- " << &a << endl;
    }
}