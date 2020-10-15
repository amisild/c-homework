#include <iostream>
#include <fstream>
#include <string>
#include <iterator>

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
    int n;
    int maxTemp, minTemp;
    string linn;
    string newLine;


    while (file.peek() != EOF) {
        getline(file, line);
        for (int i = 0; i < 1; i) {
            cout << line << '\n';

            size_t space = line.find(";");
            size_t newLine = line.find('\n');

            linn = line.substr(0, space);
            cout << "Linna nimi >>> " << linn << endl;

            temperatuurideRida = line.substr(space + 1, newLine);
            cout << "Full line of temperatures >>> " << temperatuurideRida << endl;
           
            //esimene temp
            size_t tempSpace = temperatuurideRida.find(";");
            tempOne = temperatuurideRida.substr(0, tempSpace);
            cout << "Esimene temperatuur >>> " << tempOne << endl;
            int tempOneInt = std::stoi (tempOne);
            temps[0] = tempOneInt;

            //teine temp
            tempTwo = temperatuurideRida.substr(tempSpace + 1, tempSpace);
            cout << "Teine temperatuur >>> " << tempTwo << endl;
            int tempTwoInt = std::stoi (tempTwo);
            temps[1] = tempTwoInt;

            //kolmas temp
            tempThree = temperatuurideRida.substr(tempSpace + 4, tempSpace);
            cout << "Kolmas temperatuur >>> " << tempThree << endl;
            int tempThreeInt = std::stoi (tempThree);
            temps[2] = tempThreeInt;

            //neljas temp
            tempFour = temperatuurideRida.substr(tempSpace + 7, tempSpace);
            cout << "Neljas temperatuur >>> " << tempFour << endl;
            int tempFourInt = std::stoi (tempFour);
            temps[3] = tempFourInt;

            //viies temp
            tempFive = temperatuurideRida.substr(tempSpace + 10, newLine);
            cout << "Viies temperatuur >>> " << tempFive << endl;
            int tempFiveInt = std::stoi (tempFive);
            temps[4] = tempFiveInt;


            size_t n = sizeof(temps)/sizeof(temps[0]);

            //prindin massiivi välja
            cout << "Temperatuuride massiiv: " << endl;
            for (int i = 0; i <= n; i++) {
                cout << temps[i] << endl;
            }

            //leian maksimumi
            for (i = 0; i <= n; i++) {
                if(temps[0] < temps[i]) {
                    maxTemp = temps[i];
                }
            }

            //leian miinimumi
            for (i = 0; i <= n; i++) {
                if(temps[0] > temps[i]) {
                    minTemp = temps[i];
                }
            }

            cout << "Max on >>>> " << maxTemp << endl;
            cout << "Min on >>>> " << minTemp << endl;
            cout << "-------------------------------" << endl;

        }

    }
    
}
