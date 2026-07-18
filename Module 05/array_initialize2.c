#include <stdio.h>
int main()
{
    int ar[5] = {10}; // এরের সাইজ বলা হয়েছে ৫ কিন্তু ভেলু দেওয়া হয়েছে মাত্র ১টি।
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}//baki sob ghor 0 hobe