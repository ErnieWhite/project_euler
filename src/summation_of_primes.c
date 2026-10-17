#include <stdio.h>
#include <stdint.h>

#define false (0);
#define true (1);

int is_prime(uint64_t n)
{
    if (n < 2) {
        return false;
    }
    if (n==2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    uint64_t i = 0;
    for (i = 3; i < n / 2; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(void) 
{
    uint64_t sum = 0;
    uint64_t i = 0;
    for (i = 1; i < 2000000; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    printf("%ld\n", sum);

    return 0;
}