#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,j,n;

    srand((unsigned)time(NULL));
    printf("Die 1:");
      i=rand()%6+1;
      printf("%d\n",i);
      printf("Die 2:");
      j=rand()%6+1;
	printf("%d\n",j);
      printf("Total value: %d\n",i+j);
      return 0;}
