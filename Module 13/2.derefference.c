#include <stdio.h>
int main()
{
    int val = 100;
    // val er adress save kore rakha
    // val *diye save koratai pointer
    int *adress = &val;

    // pointer diyei val print kora
    printf("%d\n", *adress);
    // pointer diyei val er man change kora
    *adress = 25;
    printf("%d\n", val);
    //evabe val access koratai derefference kora
    return 0;
}