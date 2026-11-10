#include <iostream>
using namespace std;

int main() {
    float units;
    cout << "Enter the number of units consumed: ";
    cin >> units;
    if(units <= 100) {
        cout << "Electricity bill: $" << units * 0.5 << endl;
    } else if(units <= 200) {
        cout << "Electricity bill: $" << (100 * 1.5) + ((units - 100) * 2.0) << endl;
    } else {
        cout << "Electricity bill: $" << (100 * 1.5) + (100 * 2.0) + ((units - 200) * 3.0) << endl;
    }
    return 0;
}