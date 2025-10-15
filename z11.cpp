#include <iostream>

using namespace std;


int main(void) {
    int a, b, tmp;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // flip values if b < a so a > b
    if (b < a) {
        tmp = a;
        a = b;
        b = tmp;
    }

    for (int i=a; i<b; i++) {
        if (i % 3 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
