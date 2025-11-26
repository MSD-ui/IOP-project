#include<stdio.h>
#include<string.h>
#include<time.h>

int main()
{
    typedef struct player
    {
        char name[40];
        int runs;
    }player;
    typedef struct team
    {
        char name[15];
        player players[11];
    }team;

    team team1,team2;
    player players[11];
    printf("enter the 1st team name:");
    scanf("%s",team1.name);
    printf("enter the 2nd team name:");
    scanf("%s",team2.name);


   // taking input of team 1 player.....
    printf("%s team players\n",team1.name);
    for(int i=0;i<11;i++)
    {
        printf("enter %d player:",i+1);
        scanf("%s",&team1.players[i].name);
        team1.players[i].runs=0;
    }

    // taking input of team 2 player.....
    printf("%s team players\n",team2.name);
    for(int i=0;i<11;i++)
    {
        printf("enter %d player:",i+1);
        scanf("%s",&team2.players[i].name);
         team2.players[i].runs=0;
    }
    printf("%s team playing 11 is:\n",team1.name);
    for(int i=0;i<11;i++)
    {
        printf("%d: %s",i+1,team1.players[i].name);
        printf("\n");
    }
     printf("%s team playing 11 is:\n",team1.name);
     for(int i=0;i<11;i++)
    {
        printf("%d: %s",i+1,team2.players[i].name);
        printf("\n");
    }


   int over,next=2;
   int striker , non_striker = 1;
    printf("enter the number of overs:");
    scanf("%d",&over);

    for(int o=0;o<over;o++)
    {
        printf("\n   %d over   \n",over);
        for(int ball=0;ball<=5;ball++)
        {
        
            for(int k=0;k<11;k++)
            {
              int run=0;
              while(run!=-1)
              {
              
              printf("Ball %d - Runs scored by %s: ", ball, team1.players[k].name);   
              scanf("%d", &run);

              team1.players[striker].runs += run;

              // Strike change on odd runs
               if (run % 2 == 1)
                {
                  int temp = striker;
                  striker = non_striker;
                  non_striker = temp;
                }
              }
            }

          // Change strike at end of over
          int temp = striker;
          striker = non_striker;
          non_striker = temp;

            
          
        }
    }

}