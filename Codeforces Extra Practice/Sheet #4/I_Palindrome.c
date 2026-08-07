#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char S[1001];
    scanf("%s", S);
    int len = strlen(S);
    int i = 0, j = len - 1, flag = 1;
    while (i <= j)
    {
        if (S[i] != S[j])
        {
            flag = 0;
        }
        i++;
        j--;
    }
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}