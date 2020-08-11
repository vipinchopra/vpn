#include<stdio.h>
int main()
 {
     int i,j,k;
     int a[]={1,3,2,4,2,4,4}; 
     int n=sizeof(a)/sizeof(a[0]);
     int max=a[0],min=a[0];
     for(i=0;i<n;i++)
     {
         if(a[i]>max)
         max=a[i];
         if(a[i]<min)
         min=a[i];
     }
     printf("%d %d",min,max);
 return 0;
 }