#include<stdio.h>
union guess
{
int a;
char ch;
}u;
int main()
{
    union guess k={1};
    if(k.ch==1)
    {
        printf("CPU byte order is little endian\n");
    }
    else
    {
        printf("CPU byte order is big endian\n");
    }
    return 0;
}