#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    // // manual way of string marge ba jora lagano
    // // a er sathe b add
    // int l = strlen(a);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[l] = b[i];
    //     l++;
    // }

    // built in function diye jora lagano

    // // a er sathe b ke
    // strcat(a, b);

    // b er sathe a ke
    strcat(b, a);

    printf("%s %s", a, b);

    return 0;
}