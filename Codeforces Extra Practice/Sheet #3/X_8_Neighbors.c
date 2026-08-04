#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    char A[105][105];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf(" %c", &A[i][j]);
        }
    }
    int X, Y;
    scanf("%d %d", &X, &Y);
    int r = X - 1;
    int c = Y - 1;
    int flag = 1;
    if (r - 1 >= 0 && A[r - 1][c] != 'x')
        flag = 0;
    if (r + 1 < N && A[r + 1][c] != 'x')
        flag = 0;
    if (c - 1 >= 0 && A[r][c - 1] != 'x')
        flag = 0;
    if (c + 1 < M && A[r][c + 1] != 'x')
        flag = 0;
    if (r - 1 >= 0 && c - 1 >= 0 && A[r - 1][c - 1] != 'x')
        flag = 0;
    if (r - 1 >= 0 && c + 1 < M && A[r - 1][c + 1] != 'x')
        flag = 0;
    if (r + 1 < N && c - 1 >= 0 && A[r + 1][c - 1] != 'x')
        flag = 0;
    if (r + 1 < N && c + 1 < M && A[r + 1][c + 1] != 'x')
        flag = 0;
    if (flag == 1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     char A[N][M];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             scanf(" %c", &A[i][j]);
//         }
//     }

//     int X, Y;
//     scanf("%d %d", &X, &Y);

//     // C ভাষায় ইনডেক্স ০ থেকে শুরু হয় তাই ১ বিয়োগ করে নেওয়া হলো
//     int r = X - 1;
//     int c = Y - 1;

//     int flag = 1; // ধরে নিলাম সব প্রতিবেশী 'x'

//     // ১. উপরের ঘর (যদি গ্রিডের ভেতরে থাকে)
//     if (r - 1 >= 0 && A[r - 1][c] != 'x') flag = 0;

//     // ২. নিচের ঘর
//     if (r + 1 < N && A[r + 1][c] != 'x') flag = 0;

//     // ৩. বামের ঘর
//     if (c - 1 >= 0 && A[r][c - 1] != 'x') flag = 0;

//     // ৪. ডানের ঘর
//     if (c + 1 < M && A[r][c + 1] != 'x') flag = 0;

//     // ৫. উপরে-বামের ঘর (কোণা)
//     if (r - 1 >= 0 && c - 1 >= 0 && A[r - 1][c - 1] != 'x') flag = 0;

//     // ৬. উপরে-ডানের ঘর (কোণা)
//     if (r - 1 >= 0 && c + 1 < M && A[r - 1][c + 1] != 'x') flag = 0;

//     // ৭. নিচে-বামের ঘর (কোণা)
//     if (r + 1 < N && c - 1 >= 0 && A[r + 1][c - 1] != 'x') flag = 0;

//     // ৮. নিচে-ডানের ঘর (কোণা)
//     if (r + 1 < N && c + 1 < M && A[r + 1][c + 1] != 'x') flag = 0;

//     // আউটপুট দেওয়া
//     if (flag == 1)
//     {
//         printf("yes\n");
//     }
//     else
//     {
//         printf("no\n");
//     }

//     return 0;
// }