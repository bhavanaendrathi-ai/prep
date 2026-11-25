//Given an integer `n`, count how many composite numbers exist between 1 and `n`.

#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++)
    {
        int fact = 0;

        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                fact++;
            }
        }

        if(fact > 2)
        {
            count++;
        }
    }

    printf("Number of composite numbers: %d", count);

    return 0;
}

