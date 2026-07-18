// sob value 0 chaile
#include <stdio.h>
int main()
{
    int ar[5] = {0}; // ৫ সাইজের এরে নিয়ে একটি ভেলু হিসেবে ০ রেখে দিচ্ছি। বাকি ভেলুগুলো মেমরিতে অটো ০ হিসেবে সেইভ হয়ে যাবে।
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ar[i]);
    }
    return 0;
}