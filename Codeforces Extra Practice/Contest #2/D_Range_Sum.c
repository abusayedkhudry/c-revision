#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        long long int L, R;
        scanf("%lld %lld", &L, &R);

        if (L > R)
        {
            int temp = R;
            R = L;
            L = temp;
        }
        long long int numbers = (R - L + 1);
        long long int pair_sum = L + R;
        long long int sum = ((double)numbers / 2) * pair_sum;
        printf("%lld\n", sum);
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
//         long long int L, R;
//         scanf("%lld %lld", &L, &R);
//         if (L > R)
//         {
//             int temp = R;
//             R = L;
//             L = temp;
//         }
//         long long int numbers = (R - L + 1);
//         long long int pair_sum = L + R;
//         long long int sum = 0;
//         if (numbers % 2 == 0)
//         {
//             sum = (numbers / 2) * pair_sum;
//         }
//         else
//         {
//             sum = (((numbers - 1) / 2) * pair_sum) + (pair_sum / 2);
//         }
//         printf("%lld\n", sum);
//     }

//     return 0;
// }