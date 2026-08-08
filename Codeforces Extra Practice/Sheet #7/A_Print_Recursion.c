#include <stdio.h>
void fun(int i, int N)
{

    if (i == N + 1)
    {
        printf("\n");
        return;
    }
    printf("I love Recursion\n");
    fun(i + 1, N);
}
int main()
{
    int N;
    scanf("%d", &N);
    fun(1, N);

    return 0;
}