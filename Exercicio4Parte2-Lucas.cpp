#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned>(time(nullptr)));

    
    const int numStrings = 10;

    
    string strings[numStrings];

    for (int i = 0; i < numStrings; i++) {
        string randomString;

        for (int j = 0; j < 10; j++) {
            char caractere = 'a' + rand() % ('z' - 'a' + 1);
            randomString += caractere;
        }

        
        randomString[0] = toupper(randomString[0]);

        strings[i] = randomString;
    }

    
    for (int i = 0; i < numStrings; i++) {
        cout << strings[i] << endl;
    }

    return 0;
}
