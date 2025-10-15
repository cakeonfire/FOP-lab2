#include <iostream>

using namespace std;


int main(void) {
    int n, tmp, i;
    int sum = 0;
    int count = 0;
    cout << "Enter n: ";
    cin >> n;

    i = n;
    while (i > 0) {
        cout << "Enter " << n-i+1 << ". num: ";
        cin >> tmp;
        cout << "DEBUG: tmp: " << tmp << endl;
        sum += tmp;
        count++;

        i--;
    }

    cout << "Avg: " << (float)sum / (float)count;

    return 0;
}
