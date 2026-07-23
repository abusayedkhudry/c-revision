// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int A[N];
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     int i = 0;
//     int j = N - 1;
//     int count = 0;
//     while (i <= j)
//     {
//         if (A[i] != A[j])
//         {
//             count++;
//             break;
//         }
//         else
//         {
//             i++;
//             j--;
//         }
//     }

//     if (count == 0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
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

    int palindrome = 1;
    for (int i = 0; i < N / 2; i++)
    {
        if(A[i] != A[N-1-i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}