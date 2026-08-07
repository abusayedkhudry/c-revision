#include <stdio.h>
#include <string.h>
int main()
{
    char X[21], Y[21];
    scanf("%s %s", &X, &Y);

    int val = strcmp(X, Y);

    if (val < 0)
    {
        printf("%s", X);
    }
    else if (val == 0)
    {
        printf("%s", X);
    }
    else if (val > 0)
    {
        printf("%s", Y);
    }

    return 0;
}