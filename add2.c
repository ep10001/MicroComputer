#include <stdlib.h>
#include <stdio.h>
int add2(int *a,int *b,int *c){
  *c=*a+*b;
  return(EXIT_SUCCESS);
}
int main(void){
  int a;
  int b;
  int c;
  a=1;
  b=2;
  add2(&a,&b,&c);
  fprintf(stdout, " %d+%d=%d\n",a,b,c);
  return(EXIT_SUCCESS);
}
