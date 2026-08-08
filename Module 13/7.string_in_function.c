#include <stdio.h>
#include <string.h>
void fun(char s[])
{
    int sz = strlen(s);
    printf("%s %d", s,sz);
}
int main()
{
    char s[10] = "sabid";
    fun(s);

    return 0;
}
// char *s ba char s[] jekono vabe parameter deya jay
