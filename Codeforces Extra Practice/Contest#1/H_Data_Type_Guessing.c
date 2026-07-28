#include <stdio.h>
int main()
{
    long long int n, k, a;
    scanf("%lld %lld %lld", &n, &k, &a);

    if ((n * k) % a != 0)
    {
        printf("double");
    }
    else
    {
        long long integer = (n * k) / a;
        if (integer <= 2147483647)
        {
            printf("int");
        }
        else
        {
            printf("long long");
        }
    }
    return 0;
}