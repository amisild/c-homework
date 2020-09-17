#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int r; //r = ringi raadius
int a = 2 * r; //a on ruudu külg
int ruudu_pindala = a * a;
int ruudu_umbermoot = 2 * a;
double ringi_pindala = M_PI * r * r;
double ringi_umbermoot = 2 * M_PI * r;

int main()
{
    cout << "Sisesta ringi raadius: " << endl;
    cin >> r;
    
    cout << "Sinu valitud raadiuse puhul on ruudu külg " << a << " ühiku pikkusega." << endl;

    cout << "Sa valisid raadiuseks " << r << "." << endl;
    cout << "Sellise raadiuse puhul on ruudu pindala: " << ruudu_pindala << endl;
    cout << "Ruudu ümbermõõt: " << ruudu_umbermoot << endl;
    cout << "Ringi pindala: " << ringi_pindala << endl;
    cout << "Ringi ümbermõõt: " << ringi_umbermoot << endl;
}
