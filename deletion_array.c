                /*Program to delete the element in an array*/
#include<stdio.h>
int main()
{
    //for deletion in an array

    int a[]={1,3,4,2,5};
    int pos=3;
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<=n-1;i++)
    printf("%d\t",a[i]);
   // for(int i=0;i<=n-1;i++)
   // a[pos]=a[pos+1];
    for(int i=pos-1;i<n-1;i++)
    a[i]=a[i+1];
    n--;
    printf("\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    return 0;
}