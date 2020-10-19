#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

using namespace std;


int main() {
    const constexpr char* temperatuuridefile = "/Users/user/Desktop/temperatuurid2.txt";
    ifstream file(temperatuuridefile);

    string line;
    string tempOne, tempTwo, tempThree, tempFour, tempFive;
    string temperatuurideRida;
    string tempSpace;
    int temps[4];
    int tempOneInt, tempTwoInt, tempThreeInt, tempFourInt, tempFiveInt;
    int maxTemp, minTemp;
    string linn;
    string newLine;

    while (file.peek() != EOF) {
        getline(file, line);
        for (int i = 0; i < 1; i) {
            //cout << line << '\n'; //prindib välja rea, mille saab txt failist

            size_t space = line.find(";");
            size_t newLine = line.find('\n');

            linn = line.substr(0, space);
            cout << "Linna nimi >>> " << linn << endl;

            temperatuurideRida = line.substr(space + 1, newLine);
            //cout << "Full line of temperatures >>> " << temperatuurideRida << endl; //prindib välja temperatuuride rea
           
            //esimene temp
            size_t tempSpace = temperatuurideRida.find(";");
            tempOne = temperatuurideRida.substr(0, tempSpace);
            //cout << "Esimene temperatuur >>> " << tempOne << endl;
            int tempOneInt = std::stoi (tempOne);
            temps[0] = tempOneInt;

            //teine temp
            tempTwo = temperatuurideRida.substr(tempSpace + 1, tempSpace);
            //cout << "Teine temperatuur >>> " << tempTwo << endl;
            int tempTwoInt = std::stoi (tempTwo);
            temps[1] = tempTwoInt;

            //kolmas temp
            tempThree = temperatuurideRida.substr(tempSpace + 4, tempSpace);
            //cout << "Kolmas temperatuur >>> " << tempThree << endl;
            int tempThreeInt = std::stoi (tempThree);
            temps[2] = tempThreeInt;

            //neljas temp
            tempFour = temperatuurideRida.substr(tempSpace + 7, tempSpace);
            //cout << "Neljas temperatuur >>> " << tempFour << endl;
            int tempFourInt = std::stoi (tempFour);
            temps[3] = tempFourInt;

            //viies temp
            tempFive = temperatuurideRida.substr(tempSpace + 10, newLine);
            //cout << "Viies temperatuur >>> " << tempFive << endl;
            int tempFiveInt = std::stoi (tempFive);
            temps[4] = tempFiveInt;

            //arvutan keskmise välja
            double keskmineTemp = 0.0;
            int summa = tempOneInt + tempTwoInt + tempThreeInt + tempFourInt + tempFiveInt;
            keskmineTemp = summa / 5.0;
            cout << "Selle linna keskmine temperatuur on " << keskmineTemp << " kraadi." << endl;

            size_t n = sizeof(temps)/sizeof(temps[0]);
            
            //leian maksimumi
            maxTemp = *max_element(temps, temps + n);
            cout << "Maksimaalne temperatuur on " << maxTemp << " kraadi." << endl;

            //leian miinimumi
            minTemp = *min_element(temps, temps + n);
            cout << "Minimaalne temperatuur on " << minTemp << " kraadi." << endl;

            //keskmine ilma ekstreemumiteta
            int summaIlmaEkstreemumiteta = summa - maxTemp - minTemp;
            double keskmineIlmaEkstreemumiteta = 0.0;
            keskmineIlmaEkstreemumiteta = summaIlmaEkstreemumiteta / 3;
            cout << "Selle linna keskmine temperatuuride ilma ekstreemumiteta on " << keskmineIlmaEkstreemumiteta << " kraadi." << endl;         

            cout << "-------------------------------" << endl;
            return 0;
        }
    } 
}
