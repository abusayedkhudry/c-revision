#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N + 1];
    int flag = 0;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] % 2 != 0)
        {
            flag++;
        }
    }
    int count = 0;
    if (flag == 0)
    {
        int i = 1;
        while (A[i] % 2 == 0)
        {
            A[i] /= 2;
            if (i == N)
            {
                count++;
                i = 0;
            }
            i++;
        }
        printf("%d", count);
    }
    else
    {
        printf("0");
    }
    return 0;
}