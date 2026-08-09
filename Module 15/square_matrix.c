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

    if (row == col)
    {
        printf("Square Matrix");
    }
    else
    {
        printf("Not Square Matrix");
    }

    return 0;
}