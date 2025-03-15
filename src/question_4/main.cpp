#include "question4.h"
#include <iostream>
using std::cin; using std::cout;

int main()
{
    double celsius;
    char cont;
    do {
        cont = ' ';
        cout << "\nPlease enter celsius temperture: ";
        cin >> celsius;
        cout << "\nThe converted temperture in farenheit is " << get_farenheit(celsius) << "\n";
        while (toupper(cont) != 'Y' && toupper(cont) != 'N')
        {
            cout << "\nWould you like to make another conversion? (y/n): ";
            cin >> cont;
        }      
    } while (toupper(cont) == 'Y');
    return 0;
}