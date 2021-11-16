#include <stdio.h>
void chek();
int main(){
    char exp;
    printf("Do you have experience: \n");
    printf("(Better you Uppercase(Y/N))");
    scanf("%c", &exp);

switch (exp){
    case 'Y':
        chek();
        break;
    case 'N':
        printf("Your salary is N100,000"); 
        break;
    
    default:
    printf("You are wrong");
        break;
    }
    return 0;
}



void chek(){
    int age;
    printf("WHat is your age: ");
    scanf("%d", &age);
    if(age >= 40){
    printf("Your salary is N560,000");
    }else if(age >= 30 && age < 40){
        printf("Your salary is N480,000");
        }else if(age<29){
            printf("Your salary is N300,000");
            }else{
                printf("This parameter has not been provided");
                }
}
