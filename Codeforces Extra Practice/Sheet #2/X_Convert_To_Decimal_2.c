// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while (T--)
//     {
//         long long N;
//         scanf("%lld", &N);
//         long long int bi_num = 0;
//         while (N > 0)
//         {
//             long long int bi = N % 2;
//             if (bi == 1)
//             {
//                 bi_num = bi_num*2 + bi;
//             }
//             N /= 2;
//         }
//         printf("%lld\n", bi_num);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int T;
//     scanf("%d", &T);
//     while (T--)
//     {
//         long long N;
//         scanf("%lld", &N);
//         long long int bi_num = 0;
//         while (N > 0)
//         {
//             long long int bi = N % 2;
//             if (bi == 1)
//             {
//                 bi_num = (bi_num * 10) + bi;
//             }
//             N /= 2;
//         }
//         long long int decimal = 0;
//         for (int i = 0; bi_num > 0; i++)
//         {
//             int digit = bi_num % 10;
//             decimal = decimal + digit * pow(2, i);
//             bi_num /= 10;
//         }
//         printf("%lld\n", decimal);
//     }

//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long N;
        scanf("%lld", &N);
        long long int decimal_num = 0;
        int i = 0;
        while (N > 0)
        {
            long long int bi = N % 2;
            if (bi == 1)
            {
                decimal_num = decimal_num + bi * pow(2, i);
                i++;
            }

            N /= 2;
        }
        printf("%lld\n", decimal_num);
    }

    return 0;
}