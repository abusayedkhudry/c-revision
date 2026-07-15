#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 5000) // যদি ৫০০০ টাকা থাকে
    {
        printf("Cox's Bazar jabo\n"); // তাহলে আমি কক্সবাজার যাব
        if (tk >= 10000)              // এরপর আবার চেক করব আমার কাছে ১০০০০ টাকা আছে কিনা
        {
            printf("Saint Martin jabo\n"); // থাকলে সেইন্ট মারটিন যাব
        }
        else
        {
            printf("Ferot chole jabo\n"); // সেইন্ট মারটিন যাওয়ার টাকা না থাকলে ফেরত চলে যাব
        }
    }
    else
    {
        printf("Kothao jabo na\n"); // আর যদি ৫০০০ টাকা ও না থাকে তাহলে কোথাও যাব না।
    }
    return 0;
}