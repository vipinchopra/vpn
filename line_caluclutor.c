/*Program to print the command line argument calulator*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
    if(argc!=4)
    printf("Insufficient elements");
    else
    {
     int n1=atoi(argv[1]);
     int n2=atoi(argv[3]);
     char ch;
     ch=*argv[2];

     if(ch=='+')
     printf("%d\n",n1+n2);
     else if(ch=='-')
     printf("%d\n",n1-n2);
     else if(ch=='*')
     {
         printf("%d\n",n1*n2);
     }
     else
     {
    printf("%d\n",n1/n2);
     }
      
    }   
    return 0;
}