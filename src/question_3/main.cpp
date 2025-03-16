#include "question3.h"
#include <iostream>
#include <string>

using std::cin; using std::cout; using std::string;


int main()
{
    //Using loops prompt the user for a binary string value 
    //Validate the string for length 8, the string must contain only 1 and 0s (use the string contains function to make this easier).  
    //The program will run until the user opts out (types a character to exit the program).
    
    string user_binary;
    int decimal{};
    char cont{};
    bool valid_input{};

    do
    {
        do 
        {
            cout << decimal;
            cout << "\nPlease enter an 8-digit binary value: ";
            cin >> user_binary;
            cout << user_binary << "\n";
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

        cout << "\nDecimal before function: " << decimal << "\n";
        decimal = binary_to_decimal(user_binary); // ~ 32760 is being added to my output. functions pass all test cases
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