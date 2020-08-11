/*Remove duplicate enteries in an string using time complexity of O(n2 and O(n))*/
#include<stdio.h>
#include<string.h>
#define bool int
// remove duplicate of string using the O(n2) time complexity
char* removedup(char *str,int n)
{
int i,j;
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(str[i]==str[j])
        {
        memmove(str+j,str+j+1,strlen(str+j)+1);
        n--;
        }
    }
}
return str; 
}

//remove duplicate enteries in an string using O(n) time complexity

char* removedup1(char *str,int n)
{
bool hash[256]={0};
char temp;
int i=0,j=0;
while(*(str+i))
{
    temp=str[i];
    if(hash[temp]==0)
    {
        hash[temp]=1;
        str[j]=str[i];
        j++;
    }
    i++;
}
str[j]='\0';
return str;
}


int main()
{
    char str[]="aadfgabbcd";
   // int n=sizeof(str)/sizeof(str[0]);
    int n=strlen(str);
    printf("%s",removedup1(str,n));
    return 0;
}