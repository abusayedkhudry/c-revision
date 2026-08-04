#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int B[M];
    for (int i = 0; i < M; i++)
    {
        scanf("%d", &B[i]);
    }
    int i = 0;
    int j = 0;
    while (i < N && j < M)
    {
        if (A[i] == B[j])
        {
            j++;
        }
        i++;
    }
    if (j == M)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int N, M;
//     scanf("%d %d", &N, &M);
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }
//     int B[M];
//     for (int i = 0; i < M; i++)
//     {
//         scanf("%d", &B[i]);
//     }
//     int c = 0;
//     int flag = 1;
//     int br = 0;
//     for (int i = 0; i < M; i++)
//     {

//         for (int j = 0; j < N; j++)
//         {
//             if (A[j] == B[i])
//             {
//                 if (c <= j)
//                 {
//                     c = j;
//                 }
//                 else
//                 {
//                     br = 1;
//                     flag = 0;
//                 }
//                 break;
//             }
//         }
//         if (br > 0)
//         {
//             break;
//         }
//     }
//     if (flag == 1)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }