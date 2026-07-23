#include <stdio.h>
#include <limits.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 1; i <= N; i++)
        {
            scanf("%d", &A[i]);
        }

        int small = INT_MAX;
        for (int i = 1; i < N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                int val = A[i] + A[j] + j - i;
                // printf("%d\n",val);
                if (val < small)
                {
                    small = val;
                }
            }
        }
        printf("%d\n", small);
    }

    return 0;
}