#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int flag = 0;
    for (int i = A; i <= B; i++)
    {
        int temp = i;
        int luccy_num = 0;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit != 4 && digit != 7)
            {
                luccy_num = 1;
                break;
            }
            temp = temp / 10;
        }
        if (luccy_num != 1)
        {
            flag = 1;
            printf("%d ", i);
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }
    return 0;
}