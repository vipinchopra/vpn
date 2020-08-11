/*Program to print the reverse of lements in an aray */
#include<stdio.h>
int main()
{

    int a[]={2,3,4,1,5};
    int n=sizeof(a)/sizeof(a[0]);
    int left,right;
    int temp;
    for(left=0,right=n-1;left<right;left++,right--)
    {
        temp=a[left];
        a[left]=a[right];
        a[right]=temp;
    }

    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}