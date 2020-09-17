#include <iostream>

using namespace std;

int main()
{
    double palgad [] = {923.3, 1033, 3928.5, 509, 999.9, 1000, 1709};

    int length = sizeof(palgad)/sizeof(double);

    for (int i = 0; i < length; i++) {
        if (palgad[i] < 1000) {
                cout << "Pärast palgatõusu on su palk " << palgad[i] * 1.05 << " eurot." << endl;
        }
    }

    //palgatõusu arvutamine user inputi puhul
    cout << "Mis on su palk? " << endl;
    double palk;   
    cin >> palk;
    double raise = palk * 1.05; //palgatõus

    if (palk < 1000) {
        cout << "Sinu uueks palgaks on " << raise << " eurot." << endl;
    } else {
        cout << "Selle palgaga palgatõusu ei saa." << endl;
    }
}
