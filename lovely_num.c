/*Program to find out weather a number is lovely or not*/
#include<stdio.h>
int main()
{
    int n;
    //for(n=1;n<=111;n++)
    printf("Enter the number\n");
    scanf("%d",&n);   //1233
    int temp=n;
    int j=0;
    int rem;
    int cnt=0;
    int arr[1000];
    while(temp)   //1233
    {
        rem=temp%10;   //x is 3
        temp=temp/10;   /// k is 123 
        // i will take into array than compare the array elements
        arr[j++]=rem;                             
    }   

    for(int i=0;i<j;i++)
    printf("%d",arr[i]);      

        for(int i=0;i<j;i++)
        {
            for(int k=1;k<j;k++)
                if(arr[i]==arr[k])
                cnt++;
        }
if(cnt>3)
printf("\nNot lovely\n");        
return 0;      
}