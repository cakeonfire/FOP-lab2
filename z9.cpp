#include <iostream>

using namespace std;


int main(void) {
    int n;
    cout << "Enter n: ";
    cin >> n;

    for (int i=0; i<=100; i++) {
        if (i % n == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
