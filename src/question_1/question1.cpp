#include "question1.h"
#include <string>

using::string;

bool test_config()
{
    return true;
}

bool is_palindrome(string const reference)
{
    string reverse;
    bool is_palindrome = false;

    for (int i = reference.size() - 1; i >= 0; --i)
    {
        reverse += reference[i];
    }

    if (reverse == reference)
        is_palindrome = true;

    return is_palindrome;
}