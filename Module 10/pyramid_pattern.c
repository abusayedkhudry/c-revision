#include <stdio.h>
int main()
{
    int a, s, k;
    scanf("%d", &a);
    s = a - 1;
    k = 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int l = 1; l <= k; l++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }

    return 0;
}