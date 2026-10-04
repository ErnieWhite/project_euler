#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * strrev(const char *str)
{
    // caller must free memory used by reversed_str
    //
    // EXAMPLE:
    // char *reversed = strrev("hello");
    // if (reversed != NULL) 
    // {
    //     printf("%s", reversed);
    //     free(reversed);
    // }
    size_t len = strlen(str);

    char *reversed = malloc(len + 1);
    if (reversed == NULL)
    {
        return NULL;
    }

    for (size_t i = 0; i < len; i++)
    {
        reversed[i] = str[len - 1 - i];
    }

    reversed[len] = '\0';

    return reversed;

}

int main() 
{
    char number_str[6];
    char *number_rev;
    long max = 0;
    for (int i=100; i <= 999; i++)
    {
        for (int j=100; j <= 999; j++)
        {

            int test_is_number = i * j;
            sprintf(number_str, "%d", test_is_number);

            number_rev = strrev(number_str);
            if (number_rev != NULL) 
            {
                if (strcmp(number_str, number_rev)==0)
                {
                    max = test_is_number > max ? test_is_number : max;
                    printf("I:%d:3 * J%d:3 = %d\n", i, j, test_is_number);

                }
                free(number_rev);
            }



        }
    }
    printf("MAX: %ld\n", max);
    return 1;
}