#include <stdio.h>
#include <limits.h>
int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    int min = INT_MAX;
    int count = 0;
    while (N--)
    {
        int num;
        scanf("%d", &num);
        if (num < min)
        {
            min = num;
        }
        count++;

        if (count == K)
        {
            printf("%d ", min);
            min = INT_MAX;
            count = 0;
        }
    }
    if (count != 0)
    {
        printf("%d", min);
    }
    return 0;
}