#include <stdio.h>
int main()
{
    int N, A, B;
    scanf("%d %d %d", &N, &A, &B);
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        int temp = i;
        int digit_sum = 0;
        while (temp > 0)
        {
            int last_digit = temp % 10;
            digit_sum += last_digit;
            temp /= 10;
        }
        if (A <= digit_sum && digit_sum <= B)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}