/*Program to print the random values and add into the array and print the minimu and maximu values*/
#include<stdio.h>
#include<stdlib.h>
void input(int a[],int n)
{
srand(getpid());
for(int i=0;i<n;i++)
{
    a[i]=rand()%100;
}
}
void print(int a[],int n)
{
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
}
void findminmax(int a[],int n)
{
int min=0,max=0;
for(int i=0;i<n;i++)
{
if(a[i]<a[min])
min=i;
if(a[i]>a[max])
max=i;
}
printf("\nmin=%d max=%d",min,max);
}

int main()
{
int a[100];
input(a,100);  // pass the address of array
print(a,100);  //passes the address of base array
findminmax(a,100);
    return 0;
}