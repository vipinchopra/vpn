/*Usage of dynamic memory allocation in C using realloc function*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
//allocate memory dynamically using the calloc function
 int *ptr;
    int n;
    printf("Enter the size to allocate the memory\n");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    scanf("%d",&ptr[i]);
    printf("\n-----------------------\n");   
    for(int i=0;i<n;i++)
    printf("%d\n",ptr[i]);

    // now i want to reallocate the memory using the realloc function
     printf("Enter the new size to allocate the memory\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
     for(int j=0;j<n;j++)
    scanf("%d",&ptr[j]);
     for(int j=0;j<n;j++)
    printf("%d\n",ptr[j]);
    free(ptr);  //used to avoid memory leak
    ptr=NULL;
    return 0;
}