// solve while loop

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int ar[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &ar[i]);
//     }
//     int i = 0;
//     int j = n - 1;
//     while (i < j)
//     {
//         int temp = ar[i];
//         ar[i] = ar[j];
//         ar[j] = temp;
//         i++;
//         j--;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", ar[i]);
//     }
//     return 0;
// }

// solve for loop
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}