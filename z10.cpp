#include <iostream>

using namespace std;


int main(void) {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 0;
    for (int i=0; i<=100; i++) {
        if (i % n == 0) {
            count++;
        }
    }
    cout << count;

    return 0;
}
