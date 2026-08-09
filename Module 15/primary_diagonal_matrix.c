#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // // full matrix print korte:
    //  for(int i = 0;i<row;i++)
    //  {
    //      for(int j = 0;j<col;j++)
    //      {
    //          printf("%d ",a[i][j]);
    //      }
    //      printf("\n");
    //  }

    int count = 1;
    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i != j)
                {
                    if (a[i][j] != 0)
                    {
                        count = 0;
                        break;
                    }
                }
            }
        }
        if (count == 1)
        {
            printf("Primary Diagonal Matrix");
        }
        else
        {
            printf("Not Primary Diagonal Matrix");
        }
    }
    else
    {
        printf("Not Primary Diagonal Matrix");
    }

    return 0;
}