#include <stdio.h>
void fun(int i, int N)
{
    if (i == N + 1)
        return;
    printf("%d\n", i);
    fun(i + 1, N);
}
int main()
{
    int N;
    scanf("%d", &N);
    fun(1, N);

    return 0;
}