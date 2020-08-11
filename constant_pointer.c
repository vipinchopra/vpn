/*Understanding of constant pointers*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    const int a=10;
    // i want to modify it it will done only using the pointer
    printf("%d\n",a);
    int v=11;
    const int* p;
    p=&v;
    //*p=20;    //it is read only section so it will throw error
    //it is pointing to constant integer if want to modify it will give error
    printf("%d",*p);

    int* const x=&v;
    //x=&v;
    *x=12;
    printf("%d",*x);
    return 0;
}