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
        int array_count = 0;
        for (int i = 0; i < N; i++)
        {
            int max_val = A[i];
            for (int j = i; j < N; j++)
            {
                if (max_val <= A[j])
                {
                    array_count++;
                    max_val = A[j];
                }
                else
                {
                    break;
                }
            }
        }
        printf("%d\n", array_count);
    }

    return 0;
}