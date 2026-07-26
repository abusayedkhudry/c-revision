#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if (A >= B && B >= C)
    {
        printf("%d\n", C);
        printf("%d\n", B);
        printf("%d\n", A);
    }
    else if (A >= C && C >= B)
    {
        printf("%d\n", B);
        printf("%d\n", C);
        printf("%d\n", A);
    }
    else if (C >= B && B >= A)
    {
        printf("%d\n", A);
        printf("%d\n", B);
        printf("%d\n", C);
    }
    else if (B >= C && C >= A)
    {
        printf("%d\n", A);
        printf("%d\n", C);
        printf("%d\n", B);
    }
    else if (C >= A && A >= B)
    {
        printf("%d\n", B);
        printf("%d\n", A);
        printf("%d\n", C);
    }
    else if (B >= A && A >= C)
    {
        printf("%d\n", C);
        printf("%d\n", A);
        printf("%d\n", B);
    }
    printf("\n%d\n%d\n%d\n", A, B, C);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int A, B, C;
//     scanf("%d%d%d", &A, &B, &C);
//     if (A < B)
//     {
//         if (B < C)
//         {
//             printf("%d\n", A);
//             printf("%d\n", B);
//             printf("%d\n", C);
//         }
//         else if (A < C)
//         {
//             printf("%d\n", A);
//             printf("%d\n", C);
//             printf("%d\n", B);
//         }
//         else
//         {
//             printf("%d\n", C);
//             printf("%d\n", A);
//             printf("%d\n", B);
//         }
//     }
//     else if (A > B)
//     {
//         if (B < C)
//         {
//             printf("%d\n", B);
//             printf("%d\n", C);
//             printf("%d\n", A);
//         }
//         else if (A < C)
//         {
//             printf("%d\n", B);
//             printf("%d\n", A);
//             printf("%d\n", C);
//         }
//         else
//         {
//             printf("%d\n", C);
//             printf("%d\n", B);
//             printf("%d\n", A);
//         }
//     }
//     printf("\n%d\n%d\n%d\n", A, B, C);
//     return 0;
// }