#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

char* students[20];
long matric[20];
long i;
long j;
long count;
long matricno;
char stdname[20];
long j;
/*add an array to output at the end*/
void *stdthread(void *vargp){
  long *myid = (long *)vargp;
  long c;

  printf("Thread ID: %lu, Student name: %s, matric no: %ld\n",pthread_self(),students[i-1],matric[i-1]);


}

int main(){
  printf("how many students do you want to register: ");
  scanf("%ld", &count);
  pthread_t tid[count];
  for (i=0; i < count; i++) {
    printf("students name:\n");
    scanf("%s", stdname);
    students[i]=stdname;
    printf("students matric No:\n");
    scanf("%ld",&matricno);
    matric[i] = matricno;
    pthread_create(&tid[i], NULL, stdthread, (void *)NULL);
}

pthread_exit(NULL);

return 0;
}
