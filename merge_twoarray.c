/*Merge two arrays of diffrent size */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[1000],b[1000],asize,bsize;
    int merge[1000],msize;
    int i,j;
    // program to merge two arrays and sort the array using the sorting technique bubble sort
    printf("sizoef a\n");
    scanf("%d",&asize);
    printf("size of b array\n");
    scanf("%d",&bsize);
    for(i=0;i<asize;i++)
        scanf("%d",&a[i]);    
    
     for(i=0;i<bsize;i++)
        scanf("%d",&b[i]);  
    printf("printing the elements of a\n");
    for(i=0;i<asize;i++)
        printf("%d\t",a[i]);
    printf("\nprinting the elements of b\n");
    for(i=0;i<bsize;i++)
        printf("%d\t",b[i]);

// now time for merge the two arrays
    for(i=0;i<asize;i++)
    merge[i]=a[i];

    msize=asize+bsize;
    for(i=asize,j=0;j<bsize && i<msize;i++,j++)
    merge[i]=b[j];

    printf("\n elenets in merge array are:\n");
    for(i=0;i<msize;i++)
    printf("%d\t",merge[i]);
    return 0;

}