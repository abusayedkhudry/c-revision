#include <stdio.h>
void fun(int i)
{
    if (i == 1)
    {
        printf("%d", i);
        return;
    }
    printf("%d ", i);
    fun(i - 1);
}
int main()
{
    int N;
    scanf("%d", &N);
    fun(N);

    return 0;
}