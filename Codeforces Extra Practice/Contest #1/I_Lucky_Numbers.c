#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int first = N / 10;
    int last = N % 10;
    if (first == 0 || last == 0 || first % last == 0 || last % first == 0)
        printf("YES");
    else
        printf("NO");
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int a = N % 10;
//     int b = (N - a) / 10;
//     if (a % b == 0 || b % a == 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }
