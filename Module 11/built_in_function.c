#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    printf("%llf\n", ceil(3.6));
    printf("%llf\n", ceil(3.4));
    printf("%llf\n", ceil(3.0));
    printf("%llf\n", floor(3.6));
    printf("%llf\n", floor(3.4));
    printf("%llf\n", floor(3.0));
    printf("%llf\n", round(3.6));
    printf("%llf\n", round(3.4));
    printf("%llf\n", round(3.0));
    printf("%llf\n", sqrt(25));
    printf("%llf\n", sqrt(40));
    printf("%llf\n", pow(2, 5));
    printf("%d\n", abs(-7));
    return 0;
}