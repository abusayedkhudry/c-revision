// #include <stdio.h>
// #include <math.h>
// #include <string.h>
// char S[10000001];
// int main()
// {
//     scanf("%s", S);
//     int count[26] = {0};
//     int len = strlen(S);
//     for (int i = 0; i < len; i++)
//     {
//         int index = S[i] - 'a';
//         count[index]++;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         if (count[i] > 0)
//         {
//             printf("%c : %d\n", 'a' + i, count[i]);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char S[10000001];
    scanf("%s", S);
    int count[26] = {0};
    for (int i = 0; S[i] != '\0'; i++)
    {
        int index = S[i] - 'a';
        count[index]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", 'a' + i, count[i]);
        }
    }
    return 0;
}