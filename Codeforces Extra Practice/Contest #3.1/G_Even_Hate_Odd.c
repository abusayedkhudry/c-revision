#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int even = 0;
        int odd = 0;
        if (n % 2 != 0)
        {
            printf("-1\n");
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            int ans = (abs(even - odd)) / 2;
            printf("%d\n", ans);
        }
    }

    return 0;
}