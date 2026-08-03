#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int fib1 = 0, fib2 = 1;
    long long int fib = 0;
    for (int i = 3; i <= N; i++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    if (N == 1)
    {
        printf("%lld", fib1);
    }
    else if (N == 2)
    {
        printf("%lld", fib2);
    }
    else if (N >= 3)
    {
        printf("%lld", fib);
    }

    return 0;
}