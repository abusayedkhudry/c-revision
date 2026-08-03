#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int B[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (A[i] > A[j])
            {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (B[i] > B[j])
            {
                int temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
    int flag = 1;
    int i = 0;
    while (i < N)
    {
        if (A[i] == B[i])
        {
            i++;
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     long long int sumA = 0;
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//         sumA += A[i];
//     }
//     int B[N];
//     long long int sumB = 0;
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &B[i]);
//         sumB += B[i];
//     }
//     if (sumA == sumB)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }
//     return 0;
// }

