#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int indx, val;
    scanf("%d %d", &indx, &val);
    for (int i = n; i >= indx + 1; i--)
    {
        ar[i] = ar[i - 1];
    }

    ar[indx] = val;

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}