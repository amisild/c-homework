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
    return 0;
}

void raise_user_input() {
    double salary;
    cout << "Mis on su palk? " << endl;  
    cin >> salary;
    double raise = salary * 1.05; //palgatõus
    if (salary < 1000) {        
        cout << "Sinu uueks palgaks on " << raise << " eurot." << endl;
    } else {
        cout << "Selle palgaga palgatõusu ei saa." << endl;
    }
}

int main()
{
    palkade_massiiv();

    raise_user_input();    
}