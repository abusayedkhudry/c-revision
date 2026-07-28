#include <stdio.h>
int main()
{
    int A, B, C;
    char S, Q;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

    if (S == '+')
    {
        int pluse = A + B;
        if (pluse == C)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", pluse);
        }
    }
    if (S == '-')
    {
        int minus = A - B;
        if (minus == C)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", minus);
        }
    }
    if (S == '*')
    {
        int multiplication = A * B;
        if (multiplication == C)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", multiplication);
        }
    }

    return 0;
}