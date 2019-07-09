#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int i,j,n;
char name[50];
    srand((unsigned)time(NULL));
      printf("What is your name?\n");
    scanf("%s",name);
  printf("Hello, %s!\n",name);


    printf("Rolling the dice...\n");
    printf("Die 1:");
      i=rand()%6+1;
      printf("%d\n",i);
      printf("Die 2:");
      j=rand()%6+1;
	printf("%d\n",j);

      printf("Total value: %d\n",i+j);
      if((i+j)>7)
	printf("%s won!\n",name);
      else
	printf("%s lost!\n",name);
      if(i==j)
	printf("Match the number of dice!\n");
      return 0;}
