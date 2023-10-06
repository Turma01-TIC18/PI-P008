#include<iostream>
#include<ctime>
#include <cstring>
#include <stdio.h>

using namespace std;

int main() {
    
    srand(static_cast<unsigned>(time(nullptr)));

    
    char string1[11];
    char string2[11];

    for (int i = 0; i < 10; i++) {
        string1[i] = 'a' + rand() % ('z' - 'a' + 1);
        string2[i] = 'a' + rand() % ('z' - 'a' + 1);
    }

   
    string1[10] = '\0';
    string2[10] = '\0';

    
    string1[0] = toupper(string1[0]);
    string2[0] = toupper(string2[0]);

    
    if (strcmp(string1, string2) < 0) {
        cout << string1 << endl;
        cout << string2 << endl;
    } else {
        cout << string2 << endl;
        cout << string1 << endl;
    }

    return 0;
}
