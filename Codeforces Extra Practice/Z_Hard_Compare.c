#include <stdio.h>
#include <math.h>
int main()
{
    long long int A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    double x = B * log(A);
    double y = D * log(C);
    if (x > y)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}