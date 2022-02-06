#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>



char order;
int q;



int main(){
  printf("--------------------------menu--------------------------------------\n");
  printf("insert P  for Poundo yam/Edinkaiko Soup                      -N3,200\n");
  printf("insert F for Fried Rice & Chicken                            -N3,000\n");
  printf("insert A for Amala & Ewedu Soup                              -N2,500\n");
  printf("insert E for Eba & Egusi Soup                                -N2,000\n");
  printf("insert W for White Rice & Stew                               -N2,500\n");
  printf("--------------------------------------------------------------------\n");
do{
  printf("What is your order\n");
  scanf("%s", &order);
  switch(order){
    case 'P':
       printf("How many poritions:\n");
       scanf("%d",&q);
       printf("order: Poundo Yam/Edinkaiko Soup\n");
       printf("quantity: %d\n",q);
       printf("Your total is %d\n",q*3200);
       printf("THank you shoopping with mama cas come back and blow your money\n");
       break;
    case 'F':
        printf("How many poritions: \n");
        scanf("%d",&q);
        printf("order: Fried Rice & Chicken\n");
        printf("quantity: %d\n",q);
        printf("Your total is %d\n",q*3000);
        printf("THank you shoopping with mama cas come back and blow your money\n");
        break;
    case 'A':
           printf("How many poritions: \n");
           scanf("%d",&q);
           printf("order: Amala & Ewedu Soup\n");
           printf("quantity: %d\n",q);
           printf("Your total is %d\n",q*2500);
           printf("THank you shoopping with mama cas come back and blow your money\n");
           break;
    case 'E':
           printf("How many poritions: \n");
           scanf("%d",&q);
           printf("order: Eba & Egusi Soup\n");
           printf("quantity: %d\n",q);
           printf("Your total is %d\n",q*2000);
           printf("THank you shoopping with mama cas come back and blow your money\n");
           break;
    case 'W':
           printf("How many poritions: \n");
           scanf("%d",&q);
           printf("order: White Rice & Stew\n");
           printf("quantity: %d\n",q);
           printf("Your total is %d\n",q*2500);
           printf("THank you shoopping with mama cas come back and blow your money\n");
           break;
    case 'C':
           exit(1);
    default:
          printf("We don't have that order yet\n");
          exit(1);

  }
}while(order!='C');



  return 0;
  }
