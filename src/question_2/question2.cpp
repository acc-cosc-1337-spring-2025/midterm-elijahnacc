#include "question2.h"
#include <vector>

bool test_config()
{
    return true;
}

bool is_prime(int number) 
{
    if (number <= 1)
        return false;
    
    for (int i = 2; i <= number/2; ++i)
    {
        if (number % i == 0)
            return false;
    }
    
    return true;
}

std::vector<int> get_primes(int number) 
{
    std::vector<int> prime_list;

    for (int i = 2; number > i; ++i)
    {
        if (is_prime(i) == true)
            prime_list.push_back(i);
    }

    return prime_list;
}