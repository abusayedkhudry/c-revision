#include <stdio.h>
int main()
{
    char C;
    scanf("%c", &C);
    if (C == 'z')
    {
        printf("a");
    }
    else
    {
        int a = (int)C + 1;
        printf("%c", (char)a);
    }

    return 0;
}