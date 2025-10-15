#include <iostream>
#include <time.h>

using namespace std;


int main(void) {
    srand(time(NULL));

    int n, m, tmp;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;

    for (int i=0; i<n; i++) {
        tmp = rand() % m + 1;
        cout << tmp << endl;
    }

    return 0;
}
