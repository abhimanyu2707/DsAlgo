/*
* Function overloading
* Operator overloading
*/
#include<iostream>

using namespace std;

class Math {
public:
    int sum(int a, int b) {
        return a+b;
    }
    int sum(int a, int b, int c) {
        return a+b+c;
    }
};

int main() {
    Math m;
    cout << m.sum(1, 2) << endl;
    cout << m.sum(1, 2, 3) << endl;
    return 0;
}