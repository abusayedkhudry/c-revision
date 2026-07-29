#include <stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    int small_num = 0;
    if (A <= B)
    {
        small_num = A;
    }
    else
    {
        small_num = B;
    }
    int divisor = 1;
    for (int i = 1; i <= small_num; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            divisor = i;
        }
    }
    printf("%d",divisor);

    return 0;
}