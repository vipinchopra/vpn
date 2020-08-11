/*My own atoi function for converting ascii values into integer*/
#include<stdio.h>
#include<string.h>
void myatoi(char *p)
{
    int i;
    int n=strlen(p)-1;
    label:
    for(i=0;p[i];i++)
    {
        if(!(p[i]>=48 && p[i]<=57))
        goto label;
    }
    int res=0;
    for(i=0;p[i];i++)
    {
        res=res*10+p[i]-48;
    }
printf("%d\n",res);
}
int main()
{
    char str[]="13421";
    myatoi(str);
    return 0;
}