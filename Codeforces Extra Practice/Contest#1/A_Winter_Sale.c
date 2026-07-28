#include <stdio.h>
int main()
{
    int X, P;
    scanf("%d %d", &X, &P);
    float price = ((float)P/(100-X))*100;
    printf("%.2f",price);
    return 0;
}