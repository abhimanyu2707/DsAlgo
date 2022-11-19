#include<iostream>
#include<unistd.h>

using namespace std;

int main() {
    int i = 1;
    if (fork() == 0) {
        for (int j =0; j < 10; j++) {
            cout << "In child j is: " << j << endl;
            sleep(1);
        }
    }
    else {
        for (int j =0; j < 10; j++) {
            cout << "In Parent j is: " << j <<endl;
            sleep(1);
        }
    }
    return 0;
}