/*
* Avoid diamond problem using virtual or will give runtime error for functions which can't be resolved.
* Default constructor of grand-parent needed, or else use initializer list in grand-child
*/
#include<iostream>
using namespace std;

class GP {
public:
    GP(int i) {
        cout << "GP is called" << endl;
    }
};

class Mother : virtual public GP {
public:
    Mother(int i) : GP(i) {
        cout << "Mother called" << endl;
    }
};

class Father : virtual public GP {
public:
    Father(int i) : GP(i) {
        cout << "Father called" << endl;
    }
};

class Child : public Father, public Mother {
public:
    Child(int i) : Father(i), Mother(i), GP(i) {
        cout << "Child called" << endl;
    }
};

int main() {
    Child c(1);
}