/*Sorting is done via Bubble sort technique*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr=NULL;
int n;
printf("Enter the number of elements in an array\n");
scanf("%d",&n);
//allocate some memory to it
ptr=(int*)malloc(n*sizeof(int));
printf("Enter the elements in an array\n");
for(int i=0;i<n;i++)
{    
scanf("%d",&ptr[i]);
} 
printf("\n-------------------------------------------\n");
for(int i=0;i<n;i++)
{    
printf("%d\n",ptr[i]);
}
//do sorting algorithm using the bubble sort
int i,j;
int temp;
for(i=0;i<n;i++)
{
    for(j=0;j<=n-i-1;j++)
    {
        if(ptr[j]>ptr[j+1])
        {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
        }
    }
}
printf("Sorting has been done\n");
printf("Printing the elements of sorting using BUBBLE SORT\n");
for(int i=0;i<n;i++)
{    
printf("%d\n",ptr[i]);
}
    return 0;
}