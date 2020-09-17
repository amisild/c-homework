#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int a;
int r;

double ruudupindala;
double ruuduumbermoot;
double ringipindala;
double ringiumbermoot;

int input() {
    int r;
    cout << "Sisesta ringi raadius: " << endl;
    cin >> r;
    cout << "Sa valisid raadiuseks " << r << "." << endl;
    return r;
}

void ruudu_pindala(int a) {
    ruudupindala = a * a;
    cout << "Ruudu pindala on " << ruudupindala << endl;
}

void ruudu_umbermoot(int a) {
    ruuduumbermoot = 2 * a;
    cout << "Ruudu ümbermõõt on " << ruuduumbermoot << endl;
}

void ringi_pindala(int r) {
    ringipindala = M_PI * r * r;
    cout << "Ringi pindala on " << ringipindala << endl;
}

void ringi_umbermoot(int r) {
    ringiumbermoot = 2 * M_PI * r;
    cout << "Ringi ümbermõõt on " << ringiumbermoot << endl;
}

int main()
{
    r = input();
    a = 2 * r;

    ruudu_pindala(a);
    ruudu_umbermoot(a);
    ringi_pindala(r);
    ringi_umbermoot(r);

    return 0;

}