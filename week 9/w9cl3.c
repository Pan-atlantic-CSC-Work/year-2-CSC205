#include <stdio.h>
#include <stdlib.h>

int main(){
char job[100];
int exp;

printf("What is your profession\n");
gets(job);
fflush(stdin);
printf("how many years of experience: ");
scanf("%d",&exp);


if(job=="Office Administrator" || job=="Academic" || job=="Lawyer" || job=="Teacher"){
    switch (exp){
        case 1 ... 2:
        printf("Position  APS 1-2");
        break;
        case 3 ... 5:
        printf("Position  APS 3-5");
        break;
        case 6 ... 8:
        printf("Position  APS 6-8");
        break;
        case 9 ... 10:
        printf("Position  EL1 9-10");
        break;
        case 11 ... 13:
        printf("Position  EL2 11-13");
        break;
    }
}else{
        printf("This position isn't available");
}
return 0;
}