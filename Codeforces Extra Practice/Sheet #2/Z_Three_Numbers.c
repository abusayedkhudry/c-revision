#include <stdio.h>

int main() {
    int K, S;
    scanf("%d %d", &K, &S);

    int count = 0;

    // X এবং Y এর মান 0 থেকে K পর্যন্ত ঘুরবে
    for (int X = 0; X <= K; X++) {
        for (int Y = 0; Y <= K; Y++) {
            // X + Y + Z = S সূত্র থেকে Z বের করা
            int Z = S - X - Y;

            // Z এর মান 0 বা তার বড় এবং K এর সমান বা ছোট কি না তা চেক করা
            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}