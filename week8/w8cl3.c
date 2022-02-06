#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

int mypid;
int region;
char gender[20],booth;
int age;
void *north(void* args){
    printf("%d, %s, North, %d, A\n",mypid,gender,age);
  return NULL;
}

int main(){
  pthread_t pid;
  int gap;
  printf("Gender(male/female): ");
  scanf("%s", gender);
  printf("1 for NORTH \n 2 for SOUTH \n 3 for EAST \n 4 for WEST\n");
  printf("Region: ");
  scanf("%d", &region);
  printf("What is your age: ");
  scanf("%d", &age);

  fork();
if(region==1){
  gap=pthread_create(&pid, NULL, &north, NULL);
  mypid = getpid();
      if(gap==0){
        pthread_create(&pid, NULL, &north, NULL);
    }
}

return 0;
}






  /*if(gender=="Male"){
    if(Region=="North"){
      if(18<=age<45){
        booth="A";
        gap=pthread_create(&pid, NULL, &childThread, NULL);
        mypid = getpid();
        if(gap==0){
          pthread_create(&pid, NULL, &childThread, NULL);
        }
      }else if(45<=age<75){
        booth="E";
        gap=pthread_create(&pid, NULL, &childThread, NULL);
        mypid = getpid();
        if(gap==0){
          pthread_create(&pid, NULL, &childThread, NULL);
        }
      }
    }
  }*/
