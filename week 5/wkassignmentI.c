#include <stdio.h>
#include <pthread.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <threads.h>

long i,k,m;
long temp = 0;
long oper_count;
char oper[20];
char oper_array[40][40];
//multi_array stores the multiples of 2's
int multi_array[200]={2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50};
long count=0;

void *stdthread(void *vargp);
int main(int argc, char* argv[]){
  //the user inputs the number of operations he wants to perform.
printf("how many operations: ");
scanf("%ld", &oper_count);
fflush(stdin);
//n*(n+1) with n being the number of operations. the equation is used to get the sum for each multiple. 2->6,4->20,6->48...
pthread_t tid[((oper_count)*(oper_count+1))];


for (i = 0; i < oper_count; i++) {
  //the user inputs the operations he wants to install
  printf("Input Operation:\n");
  scanf("%s", oper);
  strcpy(oper_array[i],oper);
}

  pthread_create(&(tid[0]), NULL, stdthread, (void *)NULL);
  pthread_join(tid[0],NULL);
  pthread_exit(NULL);

  return 0;
}


void *stdthread(void *vargp){
  long *myid = (long *)vargp;

//the equation that was created is divided by 2 and minused by 1; for instance if there are 4 operations 4*(4-1)->12, 12/2->6-1->5.
//it is loops through the 5 (0.1.2.3,4).
  for(int k=0;k<((((oper_count)*(oper_count+1))/2)-1);k++){
    for(int m=0;m<multi_array[k];m++){
      if(k!=oper_count){
        printf("THREAD_ID: %lu, Operation: %s\n",pthread_self(),oper_array[count]);
      }else{
        exit(1);
      }

  }
  count++;
  }
  pthread_exit(NULL);
  }
