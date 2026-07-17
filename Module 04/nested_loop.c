#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++) // ৫ বার ভিতরের লুপটি চালানোর জন্য লুপ
    {
        for (int j = 1; j <= 7; j++) // ১ থেকে ১০ প্রিন্ট করার লুপ
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}