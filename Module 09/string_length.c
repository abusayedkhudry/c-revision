#include <stdio.h>
#include <string.h>
int main()
{
    // // string length ber kora genaral way
    // char e[100];
    // fgets(e, 100, stdin);
    // int count = 0;
    // for (int i = 0; e[i] != '\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d", count);

    // //built in function diye string length ber kora prooo way
    char e[100];
    fgets(e, 100, stdin);

    // int length = strlen(e);
    // printf("%d", length);

    printf("%d", strlen(e)); // songkhepe

    return 0;
}
