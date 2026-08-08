#include <stdio.h>
void print()
{
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i == 1)
        {
            printf("%d", i);
        }
        else
        {
            printf(" %d", i);
        }
    }
}
int main()
{
    print();
    return 0;
}