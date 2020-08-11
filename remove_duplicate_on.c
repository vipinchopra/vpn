/*Remove duplicate enteries in an aray with O(n) time complexity*/
#include<stdio.h>
int main()
 {
     int i,j,max=9;
     int a[]={1,3,2,4,2,4,4}; 
     int n=sizeof(a)/sizeof(a[0]);
        int b[10]={0};
        int k;
     for(i=0,j=0;i<n;i++)
     {
         k=a[i];
         if(b[k]==0 && k!=0)
         {
            b[k]=k;
         a[j]=b[k];  // k i will use it as indexing
            
            printf("%d",a[j]);
            j++;
         }
         else
         {
          a[max]=0;   
          max--;   
         }
         
     }
    
 return 0;
 }