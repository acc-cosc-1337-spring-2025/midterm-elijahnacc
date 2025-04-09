#include "question3.h"
#include <iostream>
#include <string>

using std::cin; using std::cout;

int main()
{
    
    std::string user_binary;
    char cont{};
    bool valid_input{};
    int decimal{0};

    do
    {
        do 
        {
            cout << "\nPlease enter an 8-digit binary value: ";
            cin >> user_binary;
            valid_input = true;

            if (user_binary.size() != 8)
            {
                cout << "\nString must be exactly 8 digits.";
                valid_input = false;
            }
            if (valid_input == true)
            {
                if (user_binary.find_first_not_of("01") != std::string::npos)
                {
                    cout << "\nInvalid character in string";
                    valid_input = false;
                }
            }
        } while (valid_input == false);

        decimal = binary_to_decimal(user_binary);
        cout << decimal;
        
        cont = ' ';
        while (toupper(cont) != 'Y' && toupper(cont) != 'N')
        {
            cout << "\nWould you like to enter another binary value? (y/n): ";
            cin >> cont;
        }
    } while (toupper(cont) != 'N');

    return 0;
}