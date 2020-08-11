#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(NULL));   // value of seed value wil change eith time so we need to mention it
  //  for(int i=0;i<10;i++)
    printf("%d\n",rand()%10);
}