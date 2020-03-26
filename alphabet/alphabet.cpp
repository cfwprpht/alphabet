// alphabet.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main() {
    char instring;
    string empty = "";

    while (1) {
        system("cls");
        cout << "\n\n Enter a Letter (A-Z, a-z):\n ";
        cin >> instring;

        bool ok = true;
        if (!isalpha(instring)) {
            system("cls");
            cout << "\n\n Falsche Eingabe!\n\n press an letter or number, then enter...\n ";
            cin >> empty;
            ok = false;
        }

        if (ok) {
            if (isupper(instring)) {
                cout << " to lower: ";
                putchar(tolower(instring));
            } else {
                cout << " to upper: ";
                putchar(toupper(instring));
            }

            cout << "\n\n press an letter or number, then enter...\n ";
            cin >> empty;
            break;
        }
    }
    return 0;
}
