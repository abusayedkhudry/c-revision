#include <stdio.h>
int global = 100;
void sum()
{
    printf("v sunction = %d\n", global);
}
int main()
{
    sum();
    printf("main function = %d\n", global);
    return 0;
}