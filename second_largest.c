/*Program to print the maximum and secondmaximum elements in an array*/
#include<stdio.h>
int main()
 {
     int i,j,k;
     int a[]={1,3,2,4,5,9,4}; 
     int n=sizeof(a)/sizeof(a[0]);
     int max=a[0],secmax=0;
     for(i=0;i<n;i++)
     {
         if(a[i]>max)
         {
             secmax=max;
             max=a[i];
         }
         else if(a[i]!=max && a[i]>secmax)
         {
             secmax=a[i];
         }
     }
     printf("%d %d",max,secmax);
 return 0;
 }