#include <iostream>

using namespace std;

double salaries [] = {923.3, 1033, 3928.5, 509, 999.9, 1000, 1709};
int length = sizeof(salaries)/sizeof(double);

double palkade_massiiv() {
    for (int i = 0; i < length; i++) {
        if (salaries[i] < 1000) {
                cout << "Pärast palgatõusu on su palk " << salaries[i] * 1.05 << " eurot." << endl;
        }
    }
}

//palgatõusu arvutamine user inputi puhul
double salary;
double raise = salary * 1.05; //palgatõus

double raise_user_input() {
    if (salary < 1000) {
        cout << "Sinu uueks palgaks on " << raise << " eurot." << endl;
    } else {
        cout << "Selle palgaga palgatõusu ei saa." << endl;
    }
}

int main()
{
    palkade_massiiv();

    //palgatõus user inputiga
    cout << "Mis on su palk? " << endl;  
    cin >> salary;
    raise_user_input();
    
}
