#include <iostream>

using namespace std;

int main()
{
    cout << "Sisesta temperatuur (täisarvuna): " << endl;
    int temp;
    cin >> temp;

    if (temp > 25) {
        cout << "Hot!" << endl;
    } else if (temp < 10) {
        cout << "Cold!" << endl;
    } else {
        cout << "Warm!" << endl;
    }

}
