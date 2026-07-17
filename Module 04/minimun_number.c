#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int min = INT_MAX; // INT_MIN, INT_MAX এর জন্য এই হেডার ফাইলটি ইনক্লুড করা হচ্ছে
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a < min) // চেক করা হচ্ছে যে সংখ্যাটি মিনিমাম এর থেকেও ছোট কিনা
        {
            min = a; // ছোট হলে সেইমভাবে মিনিমাম ভেরিয়েবলটি আপডেট করা হচ্ছে
        }
    }
    printf("%d\n", min);
    return 0;
}