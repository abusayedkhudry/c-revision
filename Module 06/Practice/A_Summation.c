// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     long long int N;
//     scanf("%lld", &N);
//     long long int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%lld", &A[i]);
//     }
//     long long int sum = 0;
//     for (int i = 0; i < N; i++)
//     {
//         sum = sum + A[i];
//     }
//     printf("%lld", llabs(sum));

//     return 0;
// }

#include <stdio.h>
int main()
{
    long long int N;
    scanf("%lld", &N);
    long long int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }
    if (sum >= 0)
    {
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", -(sum));
    }

    return 0;
}