#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n); // সংখ্যাটি ইনপুট নিচ্ছি।
    if (n % 2 == 0)  // চেক করছি সংখ্যাটি ২ দিয়ে ভগ করা যায় কিনা। অর্থাৎ ২ দিয়ে ভাগ করলে ভাগশেষ ০ আসে কিনা।
    {
        printf("This a even number."); // যদি ভাগ করা যায় তাহলে এটি জোড়
    }
    else
    {
        printf("This is a odd number."); // যদি ভাগ করা না যায় তাহলে এটি বিজোড়
    }
} 
// == , <= , >= , != etc Relational operator
// && , || , ! etc Logical operator