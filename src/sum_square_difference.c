#include <stdio.h>

int main(void)
{
    int sum_of_squares = 0;
    int square_of_sums = 0;
    int sum_natural_numbers = 0;
    for (int n = 1; n <= 100; n++)
    {
        sum_of_squares += n*n;
        sum_natural_numbers += n;
    }
    square_of_sums = sum_natural_numbers * sum_natural_numbers;
    int difference = square_of_sums - sum_of_squares;
    printf("%d - %d = %d\n", square_of_sums, sum_of_squares, difference);

    return 0;
}