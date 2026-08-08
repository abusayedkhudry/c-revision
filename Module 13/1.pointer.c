#include <stdio.h>
int main()
{
    int v = 100;
    //main value print
    printf("val = %d\n",v);
    //adress print
    printf("adress = %p\n",&v);
    
    //adress store & print
    int* adress = &v;
    printf("%p\n",adress);
    
    return 0;
}