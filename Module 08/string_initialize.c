#include <stdio.h>
int main()
{
    char a[5] = {'R', 'a', 'h', 'a', 't'}; // অন্য এরের মতো {} ব্রাকেট দিয়ে কমা দিয়ে দিয়ে ভেলু দিয়ে ইনিশিয়ালাইজ করা যায়।
    char c[5] = "Rahat";// স্পেশাল পাওয়ারঃ এক লাইনে ব্রাকেট কমা ছাড়া জাস্ট ডাবল কোটেশনের মধ্যে রেখেও ইনিশিয়ালাইজ করা যায়।
    printf("%s", c);

    char b[6] = "Hello\0";
    // স্ট্রিং শেষে আমরা নাল ক্যারেক্টার রেখে দিচ্ছি এবং নাল সহ সাইজ ৬ হয় তাই আমরা ৬ সাইজ দিয়েছি। 
    // null character er jonno jayga rakhlei muloto hy, amader alada kore dite hbe na jodi jayga rekhe dei
    printf("%s", b);
    return 0;
}