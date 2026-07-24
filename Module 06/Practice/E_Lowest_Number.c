#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N + 1];
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }
    int low_num = A[1];
    int position = 1;
    for (int i = 1; i <= N; i++)
    {
        if (A[i] < low_num)
        {
            low_num = A[i];
            position = i;
        }
    }
    printf("%d %d", low_num, position);
    return 0;
}