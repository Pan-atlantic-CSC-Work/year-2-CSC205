#include <stdio.h>

int main(){
    int age;
    printf("What is your age: ");
    scanf("%d", &age);
    if(age>=18){
        printf("You can vote.");
    }else{
        printf("You cannot vote");
    }

return 0;
}