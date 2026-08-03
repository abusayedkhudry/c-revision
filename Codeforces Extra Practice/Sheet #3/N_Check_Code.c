#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    char S[A + B + 2];
    scanf("%s", &S);

    if (S[A] == '-')
    {
        for (int i = A; i < A + B; i++)
        {
            S[i] = S[i + 1];
        }
        int flag = 0;
        for (int i = 0; i < A + B; i++)
        {
            if (S[i] == '-')
            {
                flag++;
            }
        }
        if (flag > 0)
        {
            printf("No");
        }
        else
        {
            printf("Yes");
        }
    }
    else
    {
        printf("No");
    }

    return 0;
}