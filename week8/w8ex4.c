#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void floklore(){
  int quenue=15, stack=25, map=25, tree=30,x,k;
  x=((stack<=map)&&(tree>quenue));
  k=((map==quenue)||(stack>tree));
  //child process because return value zero
  if(fork() == 0){
          printf("xProcess = %d\n", x);
        }

  //parent process because return value non-zero.
  else{
    printf("kprocess = %d\n", ++k);

  }
}
int main(){
  floklore();
  return 0;
}
