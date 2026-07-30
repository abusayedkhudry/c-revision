#include <stdio.h>
int main()
{
    int pass;
    while (scanf("%d", &pass))  // jotokkhon hisebe while loop kaaj kore, jotokkhon na input sothik hoy totokkhon kaj kore while loop!
    {
        if (pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
