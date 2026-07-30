#include <stdio.h>
int main()
{
    int a;
    int b;
    int x = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b > x)
        {
            x = b;
        }
    }
    printf("%d\n", x);
    return 0;
}

// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//     int a;
//     int b;
//     int x= INT_MIN;  // INT_MIN = ekhane save thake onek choto songkha abar onek boro songkha!
//     scanf("%d",&a);   // INT_MAX = ekhane sob theke boro songkhasave thake!
//     for (int i = 1; i <= a ; i++)
//     {
//         scanf("%d",&b);
//         if (b>x)
//         {
//             x = b;
//         }
//     }
//     printf("%d\n",x);
//     return 0;
// }