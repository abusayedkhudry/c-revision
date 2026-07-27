#include <stdio.h>
int main()
{
    float N;
    scanf("%f", &N);
    int integer = N;
    float decimal = N - integer;
    if (decimal == 0)
    {
        printf("int %d", integer);
    }
    else
    {
        printf("float %d %.3f", integer, decimal);
    }

    return 0;
}