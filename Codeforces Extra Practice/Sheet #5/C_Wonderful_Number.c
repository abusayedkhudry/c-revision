#include <stdio.h>
void print()
{
    int N;
    scanf("%d", &N);
    if (N % 2 == 0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
int main()
{
    print();
    return 0;
}