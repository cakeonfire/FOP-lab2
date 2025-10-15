#include <iostream>

using namespace std;


int main(void) {
    int a, b, c;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;

    if (b < a) {
        a = b;
    }
    if (c < a) {
        cout << c << endl;
    } else {
        cout << a << endl;
    }
    
    return 0;
}
