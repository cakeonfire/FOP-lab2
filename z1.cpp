#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    // z1 a
    cout << "range: [0, 10]" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }
    cout << "\n" << endl;

    // z1 b
    // in range [5, 7]
    cout << "range: [5, 7]" << endl;
    for (int i = 5; i <= 7; i++) {
        cout << i << endl;
    }
    cout << "\n" << endl;

    // z1 b
    // in rangeg [5, 7)
    cout << "range: [5, 7)" << endl;
    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    }
    cout << "\n" << endl;

    // z1 c
    // in range [0, 10], step 2
    cout << "range: [0, 10] with step 2" << endl;
    for (int i = 0; i <= 10; i+=2) {
        cout << i << endl;
    }
    cout << "\n" << endl;

    // z1 d
    // in range [0, 10], reverse
    cout << "range: [0, 10] reverse" << endl;
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    cout << "\n" << endl;

    return 0;
}   
