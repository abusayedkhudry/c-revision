#include <stdio.h>
#include <string.h>
int main()
{
    // space chara input
    //  char a[10];
    //  scanf("%s", &a); // string input without space
    //  // scanf function string er khetre space pelei input neya bondho kore dey
    //  printf("%s\n", a);

    // space soho input
    // char b[100];
    // fgets(b, 17, stdin);//space soho inut
    // printf("%s", b);

    // string initialize
    // char c[11] = "Bangladesh"; // evabeo neya jay
    // char d[100] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    // // 2 vabei neya jay , character by character nile sesh e null \0 character deya lagbe
    // printf("%s\n", c);//%s diye puro string print kora hy
    // printf("%s\n", d);

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
    // char e[100];
    // fgets(e, 100, stdin);
    // // printf("%d", strlen(e));//songkhepe
    // int length = strlen(e);
    // printf("%d", length);

    // // array coppy/marge 2 array
    // int n;
    // scanf("%d", &n);
    // int a[n];
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &a[i]);//iput array a
    // }

    // int m;
    // scanf("%d", &m);
    // int b[m];
    // for (int j = 0; j < m; j++)
    // {
    //     scanf("%d", &b[j]);//input array b
    // }

    // int marge[n + m];//marge array creat
    // for (int i = 0; i < n; i++)//marge e a array er value input
    // {
    //     marge[i] = a[i];//a er value marge e
    // }
    // int i = n;// marge er n number index theke abar b input shuru hbe
    // for (int j = 0; j < m; j++)
    // {
    //     marge[i] = b[j]; // n number index theke e b input nicche
    //     i++;
    // }
    // for (int i = 0; i < n + m; i++)
    // {
    //     printf("%d ", marge[i]);// print kortechi marge ke
    // }

    // // string coppy manual way
    // char a[100], b[100];
    // scanf("%s %s", &a, &b);
    // for (int i = 0; i <= strlen(b); i++)
    // {
    //     a[i] = b[i];
    // }
    // printf("%s %s", a, b);

    // // builtin function string coppy
    // char a[100], b[100];
    // scanf("%s %s", &a, &b);
    // strcpy(a, b);//ei function 2nd string ke ene first string e bodiye dey
    // printf("%s %s", a, b);

    // string concat/ek string e arek string lagiye deya
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    int c = strlen(a);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[c] = b[i];
        c++;
    }
    printf("%s %s", a, b);
    return 0;
}