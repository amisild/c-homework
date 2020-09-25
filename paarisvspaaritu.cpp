#include <iostream>

using namespace std;

int number[5];
int i, even, odd;

int input() {

    for (int i = 0; i < 5; i++) {
        std::cout << "Sisesta täisarv: \n";
        std::cin >> number[i];
    }

    for (const int &i : number) {
        if (i % 2 != 0) {
            odd++;
        } else if (i % 2 == 0) {
            even++;
        }
    }

    return odd, even;
}


int main() {
    
    input();

    std::cout << "Paarituid numbreid oli " << odd << " tükki\n";
    std::cout << "Paaris numbreid oli " << even << " tükki\n";

    return 0;
}