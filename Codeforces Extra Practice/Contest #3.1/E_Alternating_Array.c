#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count1 = 0; // Pattern 1: (+ , - , + , - , ...)
    int count2 = 0; // Pattern 2: (- , + , - , + , ...)

    for (int i = 0; i < n; i++)
    {
        // Pattern 1 চেক করছি
        // Index 0, 2, 4... এ সংখ্যাটি ধনাত্মক (+) হওয়া উচিত
        // Index 1, 3, 5... এ সংখ্যাটি ঋণাত্মক (-) হওয়া উচিত
        if (i % 2 == 0)
        {
            if (a[i] < 0)
                count1++; // ঋণাত্মক থাকলে পরিবর্তন করতে হবে
        }
        else
        {
            if (a[i] > 0)
                count1++; // ধনাত্মক থাকলে পরিবর্তন করতে হবে
        }

        // Pattern 2 চেক করছি
        // Index 0, 2, 4... এ সংখ্যাটি ঋণাত্মক (-) হওয়া উচিত
        // Index 1, 3, 5... এ সংখ্যাটি ধনাত্মক (+) হওয়া উচিত
        if (i % 2 == 0)
        {
            if (a[i] > 0)
                count2++; // ধনাত্মক থাকলে পরিবর্তন করতে হবে
        }
        else
        {
            if (a[i] < 0)
                count2++; // ঋণাত্মক থাকলে পরিবর্তন করতে হবে
        }
    }

    // দুটি পরিবর্তনের মধ্যে যেটি ছোট সেটি প্রিন্ট করবো
    if (count1 < count2)
    {
        printf("%d\n", count1);
    }
    else
    {
        printf("%d\n", count2);
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     int count1 = 0; //+,-,+
//     int count2 = 0; //-,+,-
//     for (int i = 0; i < n; i++)
//     {
//         if (i % 2 == 0) //+,-,+
//         {
//             if (a[i] < 0) //- hole count hbe karon amra plas banabo
//             {
//                 count1++;
//             }
//         }
//         else
//         {
//             if (a[i] > 0) //+ hole dhukbe karon amra - banabo
//             {
//                 count1++;
//             }
//         }
//         if (i % 2 == 0) //-,+,-
//         {
//             if (a[i] > 0) //+ hole dhukbe karon amra - banabo
//             {
//                 count2++;
//             }
//         }
//         else
//         {
//             if (a[i] < 0) //- hole dhukbe karon amra + banabo
//             {
//                 count2++;
//             }
//         }
//     }
//     if (count1 < count2)
//     {
//         printf("%d", count1);
//     }
//     else
//     {
//         printf("%d", count2);
//     }

//     return 0;
// }