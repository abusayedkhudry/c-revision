#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (X < Y)
        {
            int temp = X;
            X = Y;
            Y = temp;
        }
        int sum = 0;
        for (int i = Y + 1; i < X; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}