#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);

    // // string coppy manual way
    // // a er moddhe b ke rakhbo
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[i] = b[i];
    // }

    // built in function diye coppy

    //  a er moddhe b ke
    // strcpy(a, b);

    // b er moddhe a ke
    strcpy(b, a);
    printf("%s %s", a, b);

    return 0;
}