#include <stdio.h>
int main()
{
    int a = 10,b = 20;
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d ", a);
    return 0;
}