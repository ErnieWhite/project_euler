#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int smalles_multiple(int n)
{
    bool found = false;
    int x = 1;
    while (!found && x <= INT_MAX)
    {
        found = true;
        for (int i = 1; i <= n; i++)
        {
            if (x % i != 0)
            {
                found = false;
            }
        }
        if (found)
        {
            return x;
        } 
        x++;
        found = false;
    }
    return -1;
}

int main(int argc, char **argv) 
{
    int n = 20;
    int smallest = smalles_multiple(n);
    if (smallest == -1) {
        printf("Did not find a number even divisable by 1 to %d\n", n);
    }
    printf("%d is the smallest number evenly divisable by all the numbers from 1 to %d\n", smallest, n);

    return 0;
}