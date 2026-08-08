#include <stdio.h>
void sum(int x, int y)
{
    int sum = x + y;
    printf("%d", sum);
}
int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);
    sum(X, Y);
    return 0;
}