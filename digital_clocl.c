#include<stdio.h>
#include<time.h>
int main()
{
    int hour=0,min=0,sec=0;
    while(1)
    {
    printf("%02d : %02d : 02%d",hour,min,sec);
    sec++;
    if(sec==60)
    {
        min=min+1;
        sec=0;
    }
    else if(min==60)
    {
        hour=hour+1;
        min=0;
    }
    else if(hour==24)
    {
        hour=0;
        sec=0;
        min=0;
    }
    sleep(1);
    }
    return 0;
}