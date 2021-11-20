#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void *stdthread(void *var);
int count;

int main(){

    static char stdname[20];
    static int matricno;
    int i;
    printf("how many students do you want to register: ");
    scanf("%d",&count);
    for(i=0;i<count;i++){
            printf("\nstudents name:\n");
            scanf("%s",&stdname);
            printf("studnets matric No:\n");
            scanf("%d",&matricno);
    }
    printf("Student name: %s, matric No: %d",stdname,matricno);

return 0;
} 
