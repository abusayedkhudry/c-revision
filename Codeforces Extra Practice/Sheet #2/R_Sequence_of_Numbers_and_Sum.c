#include <stdio.h>
int main()
{
    int M, N;
    while (scanf("%d %d", &M, &N) == 2)
    {
        if (M <= 0 || N <= 0)
        {
            break;
        }
        int big;
        int small;
        if (M >= N)
        {
            big = M;
            small = N;
        }
        else
        {
            big = N;
            small = M;
        }
        int sum = 0;
        for (int i = small; i <= big; i++)
        {
            sum = sum + i;
            printf("%d ", i);
        }
        printf("sum =%d\n", sum);
    }

    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int M, N;
//     while (scanf("%d %d", &M, &N) == 2)
//     {
//         // যেকোনো একটি সংখ্যা <= 0 হলে বন্ধ হবে
//         if (M <= 0 || N <= 0)
//         {
//             break;
//         }

//         // M যদি N এর চেয়ে বড় হয়, তবে অদলবদল (swap) করা
//         if (M > N)
//         {
//             int temp = M;
//             M = N;
//             N = temp;
//         }

//         int sum = 0;
//         // এখন M সবসময় ছোট এবং N সবসময় বড়
//         for (int i = M; i <= N; i++)
//         {
//             sum += i;
//             printf("%d ", i);
//         }
//         printf("sum =%d\n", sum);
//     }

//     return 0;
// }