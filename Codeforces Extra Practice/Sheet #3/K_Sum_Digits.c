#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    char A[N];
    for (int i = 0; i < N; i++)
    {
        scanf(" %c", &A[i]);
    }
    long long int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i] - '0';
    }
    printf("%lld", sum);
    return 0;
}