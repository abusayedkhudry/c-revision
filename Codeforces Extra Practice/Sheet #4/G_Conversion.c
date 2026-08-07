#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    char S[100001];
    scanf("%s", S);
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] == ',')
        {
            printf(" ");
            // S[i] -= ' ';
        }
        else if (S[i] >= 'A' && S[i] <= 'Z')
        {
            printf("%c", S[i] + 32);
            // S[i] += 32;
        }
        else if (S[i] >= 'a' && S[i] <= 'z')
        {
            printf("%c", S[i] - 32);
            // S[i] -= 32;
        }
    }
    // printf("%s", S);
    return 0;
}