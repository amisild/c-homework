#include <iostream>

using namespace std;

int temp;

int checking_temperature() {
    if (temp > 25) {
        cout << "Hot!" << endl;
    } else if (temp < 10) {
        cout << "Cold!" << endl;
    } else {
        cout << "Warm!" << endl;
    }
    return 0;
}

int main()
{
    cout << "Sisesta temperatuur (täisarvuna): " << endl;
    cin >> temp;

    checking_temperature();
}
