#include <stdio.h>
void fun(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
    // hubohu print hoyeche, amra chaile parameter
    // e int *ar evabeo array nite partam
    ar[2] = 30;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    fun(ar, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    // function e value change koray
    // main function eo change hoyeche
    //karon ekhane array poineter hisebe jay
    return 0;
}