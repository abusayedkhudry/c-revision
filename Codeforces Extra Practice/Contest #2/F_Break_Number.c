#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int count = 0;
    while (N--)
    {
        long long int x;
        scanf("%lld", &x);
        int count_temp = 0;
        while (x % 2 == 0)
        {
            x /= 2;
            count_temp++;
        }
        if (count_temp > count)
        {
            count = count_temp;
        }
    }
    printf("%d", count);
    return 0;
}