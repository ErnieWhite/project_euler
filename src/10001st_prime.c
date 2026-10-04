#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <limits.h>


bool is_prime(int n)
{
    if (n<2) 
    {
        return false;
    }
    if (n==2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;

}

int nth_prime(int n)
{
    int count = 0;
    int i = 0;
    while (count < n && i <= INT_MAX)
    {
        if (is_prime(i))
        {
            count++;
        }
        i++;
    }

    return i-1;
}

int main(void)
{
    int n = 6;
    printf("%dth prime is %d\n", n, nth_prime(n));
    n = 10001;
    printf("%dth prime is %d\n", n, nth_prime(n));
    return 0;
}