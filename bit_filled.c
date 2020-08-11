/*Understanding of bit filled for integer and character data not for real data and how we are doing packing for disbaling the structure padding*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma pack(1)
struct st
{//as processor is 32 bit its will take the allignment as 4 bytes     
int a:2;
int b:4;
char c;
float f;   // bit filled is not applicable for real data's error will come if we will use it
};
int main()
{
struct st v;
printf("%d",sizeof(v));
    return 0;
}