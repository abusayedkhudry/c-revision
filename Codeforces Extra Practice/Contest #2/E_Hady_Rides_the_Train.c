#include <stdio.h>
int main()
{
    long long int id;
    scanf("%lld", &id);
    long long int row = id / 4;
    printf("%lld ", row);
    int column = (long long int)id % 4;
    if ((long long int)row % 2 != 0)
    {
        column = 3 - column;
    }
    printf("%d", column);
    return 0;
}