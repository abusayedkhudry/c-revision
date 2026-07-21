// scanf diye input.....
// evabe input nile spaces er
//  por ar kono input ney na !

// #include <stdio.h>
// int main()
// {
//     char a[12];
//     scanf("%s", &a);
//     printf("%s\n", a);
//     return 0;
// }

// gets function use:
// #include <stdio.h>
// #include <string.h> // gets একটি বিল্ট-ইন ফাংশন, এটি ব্যাবহার করতে হলে এই হেডার ফাইলটি ইনক্লুড করতে হয়।
// int main()
// {
//     char a[20];
//     gets(a);         // gets স্পেস সহ স্ট্রিং ইনপুট নিতে পারে। যতক্ষন না ইনপুটে এন্টার না দেওয়া হচ্ছে ততক্ষন gets ইনপুট নিতে থাকে।
//     printf("%s", a); // স্পেস সহ সম্পূর্ণ স্ট্রিং প্রিন্ট হবে।
//     return 0;
// }

// fgets function use:
#include <stdio.h>
#include <string.h> // fgets ব্যাবহার করতে হলেও এই হেডার ফাইলটি ইনক্লুড করতে হয়।
int main()
{
    char a[100];
    fgets(a, 20, stdin); // fgets এর মধ্যে শুরুতে স্ট্রিং এর নাম বলে দিতে হয়, তারপর কত সাইজ ইনপুট নিব সেটার সাইজ দিতে হয় নাল সহ, তারপর stdin এই কিওয়ার্ডটি দিতে হয়।
    printf("%s", a);
    return 0;
}