#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    printf("%p\n",&a);
    printf("%p\n",&a[0]);
    printf("%p\n",a);
    //ekhane &a ja a o tai, so arrar 
    //er name tao ekta pointer,
    //ar eita array er first index
    // ke store kore, so amra eke
    //derefference kore use korte pari
    printf("1st value = %d\n", *a);
    printf("2nd value = %d\n", *(a + 1));

    return 0;
}