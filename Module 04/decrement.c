// decrement
#include <stdio.h>
int main()
{
    int i = 10;
    int x = i--;
    int y = --i;
    printf("x:%d y:%d i:%d", x, y, i);
    return 0;
}
//More_Decrement
// i-=1 == i--
// i/=2 == i=i/2
// i/=5 == i=i/5