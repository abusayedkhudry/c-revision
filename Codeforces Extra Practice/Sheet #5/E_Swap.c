#include <stdio.h>
#include <math.h>
void fun()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    int temp = X;
    X = Y;
    Y = temp;
    printf("%d %d", X, Y);
}
int main()
{
    fun();

    return 0;
}
