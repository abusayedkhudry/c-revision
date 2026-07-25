#include <stdio.h>
#include <string.h>
int main()
{
    char s[50];
    fgets(s, 50, stdin);
    // int count = 0;
    // for (int i = 0; s[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);

    // int sz = strlen(s);
    // printf("%d", sz);

    printf("%d", strlen(s));
    return 0;
}