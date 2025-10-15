#include <iostream>

using namespace std;


int main() { 
    float fahr, celsius;
    int start, limit, krok;

    start = 0;
    limit = 200;
    krok = 20;

    fahr = start;

    /*
    while (fahr <= limit) {
        celsius = 5.0 * (fahr - 32) / 9.0;
        cout << fahr << "\t" << celsius << endl;
        fahr = fahr + krok;
    }
    */
    cout << "Enter limit: ";
    cin >> limit;
    cout << "Enter step: ";
    cin >> krok;
    cout << endl;

    for(fahr = 0.0; fahr <= limit; fahr = fahr + krok) { 
        float celsius = (5.0/9.0)*(fahr - 32.0); 
        printf("%3.0f \t %6.1f \n", fahr, celsius); 
    }  

}
