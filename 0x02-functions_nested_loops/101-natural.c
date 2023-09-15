#include <stdio.h>

int main(void)
{
    int n = 10;
    int sum = 0;
    int i;

    for (i = 1; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", n, sum);

    return 0;
}

