#include<iostream>

using namespace std;

class Car {
    string brand;
    int id;
public:
    void getDetails();
};

void Car::getDetails() {
    brand = "Hyundai";
    cout << brand << endl;
}

int main() {
    Car c; //An object is created.
    c.getDetails();
    return 0;
}