#include <stdio.h>
void fun(int *v)
{
    *v = 100;
}
int main()
{
    int v = 10;
    fun(&v);
    printf("main func. = %d\n", v);
    return 0;
}