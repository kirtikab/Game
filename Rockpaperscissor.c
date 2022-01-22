#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int rockpaperscissor(char u,char c)
{
  //returns 1 you win,-1 you lose and 0 if draw
  //conditions for draw:
  ///RR
  //PP
  //SS
  if(u==c)
  {
    return 0;
  }
  //non-draw conditions
  //RP
  //PR
  //PS
  //SP
  //RS
  //SR
  if(u=='R' && c=='P')
  {
    return -1;
  }
  else if(u=='P' && c=='R')
  {
    return 1;
  }
  if(u=='S' && c=='P')
  {
    return 1;
  }
  else if(u=='P' && c=='S')
  {
    return -1;
  }
  if(u=='R' && c=='S')
  {
    return 1;
  }
  else if (u=='S' && c=='R')
  {
    return -1;
  }
}
int main()
{
  char u,c;
  srand(time(0));
  int number = rand()%100 +1;
  if(number<33)
  {
    c = 'R';
  }
  else if(number>33  && number<66)
  {
    c = 'P';
  }
  else
  {
    c = 'S';
  }
  printf("Enter your choice:\nR for rock\nS for scissors\nP for paper");
  scanf("%c",&u);
  int result = rockpaperscissor(u,c);
  if(result==0)
  {
    printf("Game is draw!!!");
  }
  else if(result==1)
  {
    printf("You choose %c and computer chose %c\nCongratulations!You win",u,c);
  }
  else
  {
    printf("You choose %c and computer chose %c\nBetter luck next time",u,c);
  }
  return 0;
}
