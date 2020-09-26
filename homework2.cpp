#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main()
{
    int winning_number;
    int guessing_number;
    string guess;
    int money_lost = -1;

    srand (time(NULL));
    winning_number = rand() % 100000 + 1;

    cout << "Want to win a million dollars?" << endl;
    cout << "If so, guess the winning number (a number between 0 and 100000)." << endl;

    do {
        cout << "Insert $1.00 and enter your number or 'q' to quit: " << endl;
        cin >> guess;
        money_lost++;

        if (guess == "q") {
            cout << "You lost $" << money_lost << ". Thanks for playing. Come again!" << endl;
            break;
        }

        int guessing_number = std::stoi (guess);  //muudab stringi integeriks

        if (guessing_number == winning_number) {
            cout << "YOU WON!" << endl;
            break;
        } else {
            cout << "Sorry, good guess, but not quite right. Do you want me to give you a hint (y/n)?" << endl;
            cin >> guess;

            if (guess == "y") {
                money_lost = money_lost + 2;
                if (guessing_number < winning_number) {
                    cout << "Insert $2.00 for the hint!" << endl;
                    cout << "Your number is too low!" << endl;
                } else {
                    cout << "Insert $2.00 for the hint!" << endl;
                    cout << "Your number is too high!" << endl;
                }

            }
        }
    } while (guessing_number != winning_number);

    return 0;
}