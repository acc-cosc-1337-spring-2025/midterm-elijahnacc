#include <iostream>
#include <string>
#include "question1.h"

using std::cout; using std::cin;

int main()
{
    std::string user_input;

    cout << "Please enter string to verify palindrome: ";
    cin >> user_input;

    bool result = is_palindrome(user_input);

    cout << "\nThe string " << user_input;

    if (result == true)
        cout << " is a palindrome.\n";
    else
        cout << " is not a palindrome.\n";
    
    return 0;
}