//Manuali length ber kora:

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[100];
//     scanf("%s",a);    // স্ট্রিং ইনপুট নিচ্ছি
//     int count = 0;    // কাউন্ট করার জন্য একটি ভেরিয়েবল নিয়ে তাতে ইনিশিয়ালি ০ রেখে দেওয়া হচ্ছে
//     for(int i=0;a[i]!='\0';i++)  // স্ট্রিং এর শুরু থেকে শেষ পর্যন্ত লুপ চালানো হচ্ছে।
//     {
//         count++;   // প্রতিবার কাউন্ট এর মান ১ করে বাড়ানো হচ্ছে। 
//     }
//     printf("%d\n",count);
//     return 0;
// }

//smart way ba function er maddhome ber kora:
#include<stdio.h>
#include<string.h>     // স্ট্রিং ফাংশন নিয়ে কাজ করা হচ্ছে তাই এই হেডার ফাইলটি ইনক্লুড করা হচ্ছে।
int main()
{
    char a[100];
    scanf("%s",a);   // স্ট্রিং ইনপুট নিচ্ছি। 
    int length = strlen(a);   // ফাংশনের মধ্যে আমাদের ইনপুট নেওয়া স্ট্রিংকে দিয়ে দিচ্ছি। 
    printf("%d\n",length);    // লেন্থ প্রিন্ট করছি।
    return 0;
}