                        /*To remove vowels in a string and print the string*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter the string\n");
    gets(str);
    for(int i=0;str[i];i++)
    {
        if(str[i]=='a' || str[i]=='i' || str[i]=='o' || str[i]=='e' || str[i]=='u')
        {
        memmove(str+i,str+i+1,strlen(str+1)+1);
        i--;   // it is use to decremnet i
        }
    }
   // puts(str);
    printf("%s",str);
    return 0;
}