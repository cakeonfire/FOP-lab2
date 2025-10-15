#include <iostream>
#include <time.h>

using namespace std;


int main(void) {
    srand(time(NULL));
    
    int n, tmp;
    int count = 0;
    cout << "Enter n [1, 10]: ";
    cin >> n;

    for (int i=0; i<=10; i++) {
        tmp = rand() % 11;
        if (tmp == n) {
            count++;
        }
    }

    cout << "Your number has occurred " << count << " times";

    return 0;
}
