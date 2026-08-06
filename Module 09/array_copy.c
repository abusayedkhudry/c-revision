#include <stdio.h>
#include <string.h>
int main()
{
    // // array coppy/marge 2 array
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);//iput array a
    }

    int m;
    scanf("%d", &m);
    int b[m];
    for (int j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);//input array b
    }

    int marge[n + m];//marge array creat
    for (int i = 0; i < n; i++)//marge e a array er value input
    {
        marge[i] = a[i];//a er value marge e
    }
    int i = n;// marge er n number index theke abar b input shuru hbe
    for (int j = 0; j < m; j++)
    {
        marge[i] = b[j]; // n number index theke e b input nicche
        i++;
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", marge[i]);// print kortechi marge ke
    }

    return 0;
}
