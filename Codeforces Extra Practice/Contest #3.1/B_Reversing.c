#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int pos = i;
            for (int j = 0; j < pos; j++)
            {
                int temp = a[pos - 1];
                a[pos - 1] = a[j];
                a[j] = temp;
                pos--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}