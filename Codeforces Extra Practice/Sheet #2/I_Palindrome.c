#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int temp = N;
    int rev_num = 0;

    while (N > 0)
    {
        int last_num = N % 10;
        rev_num = rev_num * 10 + last_num;
        N = N / 10;
    }
    printf("%d\n", rev_num);
    if (temp == rev_num)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}