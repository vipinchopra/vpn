                /*Rock paper sicessor game in C programming*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int generate(int n)
{
srand(time(NULL));
return rand()%n;
}
int greater(char ch1,char ch2)
{
if(ch1==ch2)
return -1;
if(ch1=='r' && ch2=='s')
{
    return 1;
}
else
{
    return 0;
}
if(ch1=='s' && ch2=='p')
{
    return 1;
}
else
{
return 0;
}
if(ch1=='p' && ch2=='r')
{
    return 1;
}
else
{
    return 0;
}

}
int main()
{
    int temp;
    int playercnt=0,computercnt=0;
    char playerchar,computerchar;
    char dict[]={'r','p','s'};
    printf("Welcome to the game:\n Player1 starts game\n");
    //printf("Random number genertor:%d\n",generate(2));
    for(int i=0;i<3;i++)
    {
        printf("1:rock 2.Paper 3.Scissor\n");
        printf("Players1 turn\n");
        scanf("%d",&temp);
        playerchar=dict[temp-1];
        printf("\nyou choose%c\n",playerchar);
        
        printf("1:rock 2.Paper 3.Scissor\n");
        printf("Computerturn turn\n");
        temp=generate(3)+1;
        computerchar=dict[temp-1];
        printf("\nComputer choose%c\n",computerchar);
        if(greater(computerchar,playerchar)==1)
        computercnt++;
        else if((computerchar,playerchar)==-1)
        {
        computercnt++;
        playercnt++;
        }
        else
        {
            playercnt++;
        }
        if(playercnt>computercnt)
        printf("You won\n");
        else if(playercnt<computercnt)
        printf("computer won\n");
        else
        {
            printf("Draw\n");
        }
        

    }
    return 0;
}