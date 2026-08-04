#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    long long int sum_primary = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j <= i; j++)
        {
            sum_primary += A[i][j];
        }
    }
    long long int sum_secondary = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = N - 1 - i; j >= N - 1 - i; j--)
        {
            sum_secondary += A[i][j];
        }
    }
    long long int sum = labs(sum_primary - sum_secondary);
    printf("%lld", sum);

    return 0;
}