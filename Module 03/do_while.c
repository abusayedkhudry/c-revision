#include<stdio.h>
int main()
{
    int i;
    i=1;     // initialization
    do 
    {
        printf("%d\n",i);   // code
        i=i+1;  // increment or decrement
    }
    while(i<=5);  // condition
    return 0;
}