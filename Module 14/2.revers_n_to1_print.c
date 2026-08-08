#include <stdio.h>
void fun(int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d ", i);
    fun(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);

    return 0;
}

// #include <stdio.h>
// void fun(int i, int n)
// {
//     if (i == n + 1)
//     {
//         return;
//     }
//     fun(i + 1, n);
//     printf("%d ", i);
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     fun(1, n);

//     return 0;
// }
