#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[M * N];
    for (int i = 0; i < M * N; i++)
    {
        scanf("%d", &A[i]);
    }
    int X;
    scanf("%d", &X);
    int flag = 0;
    for (int i = 0; i < M * N; i++)
    {
        if(A[i] == X)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("will not take number");
    }
    else
    {
        printf("will take number");
    } 
    return 0;
}