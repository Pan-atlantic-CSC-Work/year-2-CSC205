#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *customThreadFunction(){
for(int i=0;i<5;i++){
printf("I am a Custom Thread Function Created By Programmer.\n");
sleep(1);
if(i == 3){
printf("My JOB is Done. I am now being terminated by a Programmer\n");
pthread_exit(NULL);
}
}
return NULL;
}

int main(){
pthread_t thread; //Thread Descriptor
pthread_create(&thread, NULL , customThreadFunction, NULL);
for(int i=0;i<5;i++){
printf("I am the process thread created by compiler By default,");
sleep(1);
}
return 0;
}
