#include <stdio.h>
fun(int N)
{
    if (N == 0)
    {
        return;
    }
    int n = N % 10;
    fun(N / 10);
    printf("%d ", n);
}
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        fun(N);
        if (N == 0)
        {
            printf("0");
        }
        printf("\n");
    }

    return 0;
}