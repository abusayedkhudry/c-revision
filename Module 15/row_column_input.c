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

    // full matrix print korte:
     for(int i = 0;i<row;i++)
     {
         for(int j = 0;j<col;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }

    // specific kono row column er value print korte
    printf("%d",a[3][1]);
    printf("\n");

    // ekta full row print korte
     int r;
     scanf("%d",&r);
     for(int i = 0;i<col;i++)
     {
         printf("%d ",a[r][i]);
     }
    printf("\n");

    // full column print korte
    int c;
    scanf("%d", &c);
    for (int i = 0; i < row; i++)
    {
        printf("%d ", a[i][c]);
    }
    printf("\n");
    return 0;
}