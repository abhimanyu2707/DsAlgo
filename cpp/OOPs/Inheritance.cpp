/*
* Base Class OR Super Class
* Derived class OR Sub class
* Dynamic binding using virtual
*/

#include<iostream>
using namespace std;

class Animal {
    int i;
public:
    void type() {
        cout << "Animal" << endl;
    }
    void sound() {
        cout << "Not implemented" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Bark" << endl;
    }
};

int main() {
    Dog *a = new Dog();
    a->type();
    a->sound();
    delete a;
    return 0;
}