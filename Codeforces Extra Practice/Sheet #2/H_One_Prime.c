#include <stdio.h>
int main()
{
    long long int X;
    scanf("%lld", &X);
    int prime = 1;
    for (int i = 2; i * i <= X; i++)
    {
        if (X % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}