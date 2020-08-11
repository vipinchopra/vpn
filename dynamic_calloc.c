#include<stdio.h>
#include<stdlib.h>
int main()
{
//allocate memory dynamically using the calloc function
 int *ptr;
    int n;
    printf("Enter the size to allocate the memory\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(ptr));
    for(int i=0;i<n;i++)
    scanf("%d",&ptr[i]);
    printf("\n-----------------------\n");   
    for(int i=0;i<n;i++)
    printf("%d\n",ptr[i]);
    return 0;
}