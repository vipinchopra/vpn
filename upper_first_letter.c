
                        /*Program to do uppercase first letter of string  and print the string*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*void upper_first(char s[],int start,int end)
{
int w_start,w_end;
for(w_start=w_end=start;w_end<end;w_end++)
{
if(w_end==' ')
continue;

w_start=w_end;
while(s[w_end]!=' ' && w_end<=end)
w_end++;
w_end--;

s[w_start]=s[w_start]-32;
//Upper(s,w_start,w_end);
}
}*/
void first(char s[],int n)
{
for(int i=0;i<n;i++)
{
    //i need to search first space int the string
    if(i==0 && s[i]!=' ' || s[i-1]==' ' && s[i]!=' ')
    //if(s[i]==' ' && s[i-1]!=' ' || i==0 && s[i]!=' ')
    {
        if(s[i]>='a' && s[i]<='z')
        {
         s[i]=s[i]-32;
        }  
    }
}
}
int main()
{
    char str[100];
    printf("enter the string\n");
    gets(str);
    first(str,strlen(str)-1);
    puts(str);
 //   printf("%s",str);
    return 0;
}