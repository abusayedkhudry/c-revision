#include <stdio.h>
int main()
{
    char S[1000001];
    scanf("%s", &S);
    long long int sum = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        sum = sum + (S[i] - 48);
    }
    printf("%lld", sum);

    return 0;
}