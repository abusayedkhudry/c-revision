// #include <stdio.h>
// #include <limits.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     int min = INT_MAX;
//     int max = INT_MIN;
//     int min_indx = -1;
//     int max_indx = -1;
//     for (int i = 0; i < N; i++)
//     {
//         if (A[i] < min)
//         {
//             min = A[i];
//             min_indx = i;
//         }
//         if (A[i] > max)
//         {
//             max = A[i];
//             max_indx = i;
//         }
//     }

//     int temp = A[min_indx];
//     A[min_indx] = A[max_indx];
//     A[max_indx] = temp;
//     for (int i = 0; i < N; i++)
//     {
//         printf("%d ", A[i]);
//     }
//     return 0;
// }

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
    int min_index = 0;
    int max_index = 0;
    for (int i = 1; i < N; i++)
    {
        if (A[i] < A[min_index])
        {
            min_index = i;
        }
        if (A[i] > A[max_index])
        {
            max_index = i;
        }
    }

    int temp = A[min_index];
    A[min_index] = A[max_index];
    A[max_index] = temp;
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}