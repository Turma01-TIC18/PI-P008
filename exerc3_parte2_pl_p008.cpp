#include <iostream>
#include <cstdlib>
#include <algorithm> 

using namespace std;

int main() {
    
    string char1 = {" "}, char2 = {" "};

    for (int i = 0; i < 10; ++i) {
        char charAleatorio = 'a' + rand() % ('z' - 'a' + 1);
        char1 += charAleatorio;

        charAleatorio = 'a' + rand() % ('z' - 'a' + 1);
        char2 += charAleatorio;
    }

    if (!char1.empty()) {
        char1[0] = toupper(char1[0]);
    }

    if (!char2.empty()) {
        char2[0] = toupper(char2[0]);
    }

    cout << "String 1: " << char1 << endl;
    cout << "String 2: " << char2 << endl;

    // Ordenando as strings em ordem alfabética
    sort(char1.begin(), char1.end());
    sort(char2.begin(), char2.end());

    cout << "Strings em ordem alfabetica:" << endl;
    cout << "String 1: " << char1 << endl;
    cout << "String 2: " << char2 << endl;

    return 0;
}
