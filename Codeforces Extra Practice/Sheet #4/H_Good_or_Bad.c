#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char S[100001];
        scanf("%s", S);
        int flag = 0;
        int len = strlen(S);
        for (int i = 0; i < len - 2; i++)
        {
            if (S[i] == '0' && S[i + 1] == '1' && S[i + 2] == '0')
            {
                flag = 1;
                break;
            }
            else if (S[i] == '1' && S[i + 1] == '0' && S[i + 2] == '1')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}