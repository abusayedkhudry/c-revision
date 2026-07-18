#include <stdio.h>
int main()
{
    int ar[5];
    for (int i = 0; i < 5; i++) // এরে ইনপুট
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < 5; i++) // এরে আউটপুট 
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}