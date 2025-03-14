#include "question2.h"
#include <iostream>
#include <vector>

using std::cin; using std::cout;


int main()
{
    int user_input;
    std::vector<int> prime_list;

    do
    {
        cout << "Please enter number to evaluate (1-60): ";
        cin >> user_input;
        
        if (user_input < 1 || user_input > 60)
            cout << "\nInput out of range\n";
        
    } while (user_input < 1 || user_input > 60);

    prime_list = get_primes(user_input);

    cout << "The list of primes preceding " << user_input << " are ";

    for (int number: prime_list)
        cout << number << " ";
    
    cout << "\n";
    
    return 0;
}