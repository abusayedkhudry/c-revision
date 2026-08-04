#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int count[100001] = {0};

    for (int i = 0; i < N; i++)
    {
        int val;
        scanf("%d", &val);
        count[val]++;
    }
    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", count[i]);
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
//     int count = 0;
//     for (int i = 1; i <= M; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             if (A[j] == i)
//             {
//                 count++;
//             }
//         }
//         printf("%d\n", count);
//         count = 0;
//     }
//     return 0;
// }