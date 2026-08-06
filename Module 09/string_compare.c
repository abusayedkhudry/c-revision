#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    // // manual way
    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Same");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("A is smaller");
    //         break;
    //     }
    //     else if (a[i] > b[i])
    //     {
    //         printf("B is smaller");
    //         break;
    //     }
    //     else if (a[i] == b[i])
    //     {
    //         i++;
    //     }
    // }

    // built in function string compare
    int val = strcmp(a, b);
    if (val < 0)
    {
        printf("A is smaller");
    }
    else if (val == 0)
    {
        printf("same");
    }
    else if (val > 0)
    {
        printf("B is smaller");
    }

    return 0;
}