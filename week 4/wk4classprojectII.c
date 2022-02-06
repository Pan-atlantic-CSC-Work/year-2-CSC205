#include <stdio.h>

int main(){
    int age;
    char exp[50];
    printf("Do you have experience(Y/N): ");
    gets(exp);
    printf("What is your age: ");
    scanf("%d", &age);
    if(age>=40){
        printf("Congrats your salary is N560,000");
    }else if(age>=30 && age<40){
        printf("Congrats your salary is N480,000");
    }else if(age<28){
        printf("Congrats your salary is N300,000");
    }else if(exp == "\0" || exp == "N" ){
        printf("Congrats you lack experience your salary is N100,000");
    }
        




return 0;
} 