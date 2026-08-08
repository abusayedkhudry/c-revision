#include <stdio.h>
void fun(int v)
{
    printf("fun func. = %d\n", v);
    printf("fun func. adress = %p\n", &v);
    v = 100;
    printf("fun func. = %d\n", v);
    printf("fun func. adress = %p\n", &v);
}
int main()
{
    int v = 10;
    fun(v);
    printf("main func. = %d\n", v);
    printf("main func. adress = %p\n", &v);
    return 0;
}
// ekhane fun function e value change korleo
// seta main function e change hbe na
// karon amra ekhane just value change korchi
// tai shudhu fun function ei value change hbe
// ar main function e je value chilo setai thakbe;

//jodi valu sob jaygay change korte chai tahole
// pass by refference korte hbe
//next e seta kora holo.........