#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int r; //r = ringi raadius
int a = 2 * r; //a on ruudu külg
int ruudupindala;
int ruuduumbermoot;

int ruut(int a, int r) {
    int r;
    int a = 2 * r;
    
    int ruudu_pindala(int a) {
        //int ruudupindala;
        ruudupindala = a * a;
        return ruudupindala;
    }

    int ruudu_umbermoot(int a) {
        //int ruuduumbermoot;
        ruuduumbermoot = 2 * a;
        return ruuduumbermoot
    }
}

/*int ruudu_pindala(int r, int a) {
    int a = 2 
    int ruudupindala; // = a * a;
    ruudupindala = a * a;
    return ruudupindala;
}

int ruudu_umbermoot() {
    int ru = 2 * a;
}

double ringi_pindala() {
    double ri_p = M_PI * r * r;
}

double 

/*int ruudu_pindala = a * a;
int ruudu_umbermoot = 2 * a;
double ringi_pindala = M_PI * r * r;
double ringi_umbermoot = 2 * M_PI * r;
*/
int main()
{
    cout << "Sisesta ringi raadius: " << endl;
    cin >> r;

    cout << "Sinu valitud raadiuse puhul on ruudu külg " << a << " ühiku pikkusega." << endl;

    cout << "Sa valisid raadiuseks " << r << "." << endl;
    cout << "Sellise raadiuse puhul on ruudu pindala: " << ruudupindala << endl;
    cout << "Ruudu ümbermõõt: " << ruuduumbermoot << endl;
    //cout << "Ringi pindala: " << ringi_pindala << endl;
    //cout << "Ringi ümbermõõt: " << ringi_umbermoot << endl;
    cout << "hello" << endl;
}