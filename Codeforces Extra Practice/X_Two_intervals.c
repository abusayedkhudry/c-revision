#include <stdio.h>
int main()
{
    long long int l1, r1, l2, r2;
    scanf("%lld %lld %lld %lld", &l1, &r1, &l2, &r2);

    if (l2 >= l1 && r1 >= r2)
    {
        printf("%lld %lld", l2, r2);
    }
    else if (l1 >= l2 && r2 >= r1)
    {
        printf("%lld %lld", l1, r1);
    }
    else if (r1 >= l2 && r2 >= r1)
    {
        printf("%lld %lld", l2, r1);
    }
    else if (r2 >= l1 && r1 >= r2)
    {
        printf("%lld %lld", l1, r2);
    }
    else
    {
        printf("-1");
    }

    return 0;
}