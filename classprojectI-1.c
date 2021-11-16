#include <stdio.h>

int main(){
    int CSC_201, CSC_205, STA_205, total;
    double average;
    printf("What is your csc_201 score: ");
    scanf("%d",&CSC_201);
    printf("What is your csc_205 score: ");
    scanf("%d",&CSC_205);
    printf("What is your sta_205 score: ");
    scanf("%d",&STA_205);
    total= CSC_201+CSC_205+STA_205;
    average = ((total)/3);
    printf("%d \n",total);
    printf("%f",average);



return 0;
} 