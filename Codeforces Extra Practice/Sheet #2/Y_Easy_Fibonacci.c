#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int fib1 = 0, fib2 = 1;
    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            printf("%d ", fib1);
            continue;
        }
        if (i == 2)
        {
            printf("%d ", fib2);
            continue;
        }
        int fib = fib1 + fib2;
        printf("%d ", fib);
        fib1 = fib2;
        fib2 = fib;
    }
    return 0;
}