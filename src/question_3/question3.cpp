#include "question3.h"
#include <string>

bool test_config()
{
    return true;
}

int binary_to_decimal(std::string binary)
{
    int decimal = 0;
    int exponent = 0;
    int length = binary.size();

    for (int digit = 1; digit <= length; ++digit)
    {
        if (binary[digit - 1] == '1')
        {
            exponent = length - digit;
            decimal += get_power(2, exponent);
        }
    }
    
    return decimal;
}

int get_power(int base, int exponent)
{
    int power = 1;

    while (exponent > 0)
    {
        power *= base;
        --exponent;
    }
    
    return power;
}