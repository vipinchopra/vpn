 /*Duplicates elements in an array O(n3) time complexity*/
 #include<stdio.h>
 int main()
 {
     int i,j,k;
     int a[]={1,3,2,4,2,4,4}; 
        int n=sizeof(a)/sizeof(a[0]);
     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;)
         {
             if(a[i]==a[j])
             {
                 for(k=j;k<n;k++)
                 {
                     a[k]=a[k+1];
                 }
                 n--;
             }
             else
             {
                 j++;
             }
             
         }

     }   
     for(i=0;i<n;i++)
    printf("%d\t",a[i]);
     return 0;
 }