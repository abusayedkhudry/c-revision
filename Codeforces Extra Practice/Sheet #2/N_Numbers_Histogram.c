#include <stdio.h>
int main()
{
    char S;
    scanf("%c", &S);
    int N;
    scanf("%d", &N);
    while (N--)
    {
        int X;
        scanf("%d", &X);
        for (int i = 1; i <= X; i++)
        {
            printf("%c", S);
        }
        printf("\n");
    }
    return 0;
}