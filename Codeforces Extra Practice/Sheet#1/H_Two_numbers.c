#include <stdio.h>
#include <math.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    double c = (double)A / B;
    printf("floor %d / %d = %d\n", A, B, (int)floor(c));
    printf("ceil %d / %d = %d\n", A, B, (int)ceil(c));
    printf("round %d / %d = %d\n", A, B, (int)round(c));
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int A, B; // A এবং B নামে দুটি int টাইপের ভেরিয়েবল ঘোষণা করা হয়েছে।
//     scanf("%d %d", &A, &B); // User-এর কাছ থেকে দুটি পূর্ণসংখ্যা ইনপুট নেওয়া হচ্ছে।
//     double c = (double)A / B; // A-কে double এ Type Cast করা হয়েছে যাতে Integer Division না হয়ে Floating Point Division হয়।

//     int floor = (int)c; // c-এর দশমিক অংশ কেটে শুধু পূর্ণসংখ্যা অংশ রাখা হয়েছে (Truncate)। এটিই floor হিসেবে ব্যবহার করা হচ্ছে (Positive সংখ্যার জন্য)।
//     int ceil; // ceil সংরক্ষণ করার জন্য একটি int ভেরিয়েবল ঘোষণা করা হয়েছে।
//     if (c == (int)c) // পরীক্ষা করা হচ্ছে c-এর কোনো দশমিক অংশ আছে কিনা।
//     {
//         ceil = (int)c; // যদি দশমিক অংশ না থাকে, তাহলে ceil = c হবে।
//     }
//     else
//     {
//         ceil = (int)c + 1; // যদি দশমিক অংশ থাকে, তাহলে পূর্ণসংখ্যা অংশের সাথে ১ যোগ করে ceil বের করা হচ্ছে।
//     }
//     int round = (int)(c + 0.5); // প্রথমে 0.5 যোগ করা হচ্ছে, তারপর int এ Type Cast করে নিকটতম পূর্ণসংখ্যা বের করা হচ্ছে (Positive সংখ্যার জন্য)।

//     printf("floor %d / %d = %d\n", A, B, floor); // floor-এর মান প্রিন্ট করা হচ্ছে।
//     printf("ceil %d / %d = %d\n", A, B, ceil); // ceil-এর মান প্রিন্ট করা হচ্ছে।
//     printf("round %d / %d = %d\n", A, B, round); // round-এর মান প্রিন্ট করা হচ্ছে।

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     double c = (double)A / B;
//     int integer = (int)c;
//     double decimal = c - integer;
//     printf("floor %d / %d = %d\n", A, B, integer);
//     if (decimal > 0)
//     {
//         printf("ceil %d / %d = %d\n", A, B, (integer + 1));
//     }
//     else
//     {
//         printf("ceil %d / %d = %d\n", A, B, integer);
//     }
//     if (decimal >= 0.5)
//     {
//         printf("round %d / %d = %d\n", A, B, (integer + 1));
//     }
//     else
//     {
//         printf("round %d / %d = %d\n", A, B, integer);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int A, B;
//     scanf("%d %d", &A, &B);
//     double c = (double)A / B;
//     int floor = (int)c;
//     int ceil;
//     if (c == (int)c)
//     {
//         ceil = (int)c;
//     }
//     else
//     {
//         ceil = (int)c + 1;
//     }
//     int round = (int)(c + 0.5);
//     printf("floor %d / %d = %d\n", A, B, floor);
//     printf("ceil %d / %d = %d\n", A, B, ceil);
//     printf("round %d / %d = %d\n", A, B, round);
//     return 0;
// }