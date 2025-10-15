#include <iostream>

using namespace std;


int main(void) {

    float tmp = 0;
    for (int i=0; i<10; i++) {
        cout << "Enter real: ";
        cin >> tmp;
        if (tmp > 0.0) {
            cout << tmp << endl;
        }
    }

    return 0;
}
