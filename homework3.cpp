#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {    
    const constexpr char* temperatuuridefile = "/Users/user/Desktop/temperatuurid2.txt";
    ifstream file(temperatuuridefile);

    string line;
    string a;
    float tempEraldi;
    string tempLine;
    string everyElement;
    string tempOne;
    string tempTwo;
    string tempThree;
    string tempFour;
    string tempFive;
    string temperatuuriderida;
    string tempspace;
    int temps[4];
    int tempOneInt;
    int tempTwoInt;
    int tempThreeInt;
    int tempFourInt;
    int tempFiveInt;
    int n;


    //old
    string content;
    string linn;
    string temperatuurid;
    string newline;
    int delimiter;


    while (file.peek() != EOF) {
        getline(file, line);
        for (int i = 0; i < 1; i++) {
            cout << line << '\n';

            size_t space = line.find(";");
            size_t newline = line.find('\n');

            linn = line.substr(0, space);
            cout << "Linna nimi >>>> " << linn << endl;



            temperatuuriderida = line.substr(space + 1, newline);
            cout << "Full line of temperatures >>>> " << temperatuuriderida << endl;
           
            //esimene temp
            size_t tempspace = temperatuuriderida.find(";");
            tempOne = temperatuuriderida.substr(0, tempspace);
            cout << "Esimene temperatuur >>> " << tempOne << endl;
            int tempOneInt = std::stoi (tempOne);
            tempOneInt >> temps[i];

            //teine temp
            tempTwo = temperatuuriderida.substr(tempspace + 1, tempspace);
            cout << "Teine temperatuur >>> " << tempTwo << endl;
            int tempTwoInt = std::stoi (tempTwo);
            tempTwoInt >> temps[i];

            //kolmas temp
            tempThree = temperatuuriderida.substr(tempspace + 4, tempspace);
            cout << "Kolmas temperatuur >>> " << tempThree << endl;
            int tempThreeInt = std::stoi (tempThree);
            tempThreeInt >> temps[i];

            //neljas temp
            tempFour = temperatuuriderida.substr(tempspace + 7, tempspace);
            cout << "Neljas temperatuur >>> " << tempFour << endl;
            int tempFourInt = std::stoi (tempFour);
            tempFourInt >> temps[i];

            //viies temp
            tempFive = temperatuuriderida.substr(tempspace + 10, newline);
            cout << "Viies temperatuur >>> " << tempFive << endl;
            int tempFiveInt = std::stoi (tempFive);
            tempFiveInt >> temps[i];

            size_t n = sizeof(temps)/sizeof(temps[0]);

            for (int i = n - 1; i >= 0; i--) { //ei tööta for some reasons
                cout << "Temperatuuride massiiv: " << endl;
                cout << temps[i];
            }

            //leian maksimumi
            for (i = 1; i < n; i++) { //ei tööta, kuna array ei tööta
                if(temps[0] < temps[i]) {
                    temps[0] = temps[i];
                }
            }

            cout << "Max on >>>> " << temps[0];

            cout << "-------------------------------" << endl;




            //tempOne = line.substr(space + 1, newline);
            //cout << "Temps i hope >>>> " << tempOne << endl;



            //linn = line.substr(0, space);
            //cout << "Linn >>> " << linn << '\n';
            //temperatuurid = temperatuurid.substr(space + 1, line.size());
            //cout << "Temperatuur >>> " << temperatuurid << '\n';


        }
            

    }

    
    
}