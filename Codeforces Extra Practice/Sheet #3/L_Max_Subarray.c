#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++)
        {
            int max = A[i];
            for (int j = i; j < N; j++)
            {
                if (A[j] > max)
                {
                    max = A[j];
                }
                printf("%d ", max);
            }
        }
        printf("\n");
    }

    return 0;
}