#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (j == i + 1)
            {
                if (i == (N - 1) / 2)
                {
                    printf("X");
                    continue;
                }
                printf("\\");
                continue;
            }
            if (j == N - i)
            {
                if (i == (N - 1) / 2)
                {
                    continue;
                }
                printf("/");
                continue;
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}