#include <stdio.h>
void fun(int N, int s, int k, int i)
{
    if (i == N + 1)
    {
        return;
    }
    for (int j = 1; j <= s; j++)
    {
        printf(" ");
    }
    for (int j = 1; j <= k; j++)
    {
        printf("*");
    }
    printf("\n");
    fun(N, (s - 1), (k + 2), (i + 1));
}
int main()
{
    int N;
    scanf("%d", &N);
    int s = N - 1;
    fun(N, s, 1, 1);

    return 0;
}