// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int N;
//     scanf("%d", &N);
//     int year = N / 365;
//     printf("%d years\n", year);
//     int remain = N - (year * 365);
//     int month = remain / 30;
//     printf("%d months\n", month);
//     int day = remain - (month * 30);
//     printf("%d days\n", day);
//     return 0;
// }

#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d", &N);
    int year = N / 365;
    printf("%d years\n", year);
    N = N % 365;
    int month = N / 30;
    printf("%d months\n", month);
    int day = N % 30;
    printf("%d days\n", day);
    return 0;
}