#include <stdio.h>
#include <math.h>
void fun()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int sq = sqrt(N);
        if (N == 1)
        {
            printf("NO\n");
        }
        if (N == 2)
        {
            printf("YES\n");
        }
        int flag = 1;
        if (N > 2)
        {
            for (int i = 2; i <= sq; i++)
            {
                if (N % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }
        }
    }
}
int main()
{
    fun();

    return 0;
}
