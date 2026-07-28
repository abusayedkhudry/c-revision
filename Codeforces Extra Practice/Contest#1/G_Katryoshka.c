#include <stdio.h>
int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);

    long long int katryoshkas = 0;
    long long x = n;
    if (m < x)
    {
        x = m;
    }
    if (k < x)
    {
        x = k;
    }
    katryoshkas = katryoshkas + x;

    n -= x;
    m -= x;
    k -= x;
    n = n / 2;
    if (n < k)
    {
        katryoshkas += n;
    }
    else
    {
        katryoshkas += k;
    }
    printf("%lld",katryoshkas);

    return 0;
}