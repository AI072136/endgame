#include<stdio.h>
#include<stdlib.h>

int main(){
  char num[10];
  FILE *sc;
  sc=fopen("./game.txt","w+");
  scanf("%s",num);
  fputs("10\n",sc);
  //fputs("10\n",sc);
  fgets(num,10,sc);
  printf("%s",num);
  fclose(sc);
}
