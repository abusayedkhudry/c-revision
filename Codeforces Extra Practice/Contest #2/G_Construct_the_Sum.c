#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int n, s;
        scanf("%lld %lld", &n, &s);

        long long sum = (1LL * n * (n + 1)) / 2;
        if (sum < s)
        {
            printf("-1\n");
            continue;
        }
        if (n > s)
        {
            n = s;
        }
        for (long long i = n; i >= 1; i--)
        {
            if (s >= i)
            {
                printf("%lld ", i);
                s = s - i;
            }
            else
            {
                if (s > 0)
                {
                    printf("%lld ", s);
                }
                break;
            }
            if (s == 0)
            {
                break;
            }
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while (T--)
//     {
//         long long int n, s;
//         scanf("%lld %lld", &n, &s);
//         long long sum = ((long long)n * (n + 1)) / 2;
//         if (sum < s)
//         {
//             printf("-1\n");
//             continue;
//         }
//         if (n > s)
//         {
//             n = s;
//         }
//         for (long long i = n; i >= 1; i--)
//         {
//             if (s >= i)
//             {
//                 printf("%lld ", i);
//                 s = s - i;
//             }
//             else
//             {
//                 if (s > 0)
//                 {
//                     printf("%lld ", s);
//                 }
//                 break;
//             }
//             if (s == 0)
//             {
//                 break;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while (T--)
//     {
//         long long int n, s;
//         scanf("%lld %lld", &n, &s);
//         long long sum = (n * (n + 1)) / 2;
//         if (sum < s)
//         {
//             printf("-1");
//         }
//         else
//         {
//             while (s > 0)
//             {
//                 if (n >= s)
//                 {
//                     printf("%lld ", s);
//                     break;
//                 }
//                 else
//                 {
//                     printf("%lld ", n);
//                     s = s - n;
//                     n--;
//                 }
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }