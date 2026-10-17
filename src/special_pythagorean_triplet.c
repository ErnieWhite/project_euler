/*
 * FILE: special_pythagorean_triplet.c
 * DESCIPTION: Project Euler Problem 9
 *  A Pythorean triplet is a set of three natural numbers, a < b < c, for which,
 *  a^2 + b^2 = c^2.
 * 
 * For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2
 *
 * There exists exactly one Pythogorean triplet for which a + b + c = 1000.
 * Find the product abc.
*/

#include <stdio.h>
#include <stdint.h>

int main(void) 
{
    uint64_t n = 1000;
    uint64_t a_max = n / 3;
    uint64_t b_max = n / 3;
    uint64_t c_max = n - a_max - b_max;

    while (a_max >= b_max || b_max >= c_max) {
        a_max--;
        c_max++;
    }
    printf("a_max: %ld\nb_max: %ld\nc_max: %ld\n", a_max, b_max, c_max);

    uint64_t a;
    uint64_t b;
    uint64_t c;
    for (a = 0; a <= 1000; a++) {
        for (b = a + 1; b <= 1000; b++) {
            for (c = b + 1; c <= 1000; c++) {
                if (((a*a + b*b) == c*c) && (a+b+c == 1000)) {
                    printf("\n");
                    printf("a: %ld\nb: %ld\nc: %ld\n", a, b, c);
                    printf("a*b*c = %ld\n", a * b * c);
                    break;
                }
            
            }
        }
    
    }
    return 0;
}