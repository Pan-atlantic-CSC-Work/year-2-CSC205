#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>







int main(){
  int i,j,n;

printf("Enter the value for n: ");
scanf("%d", &n);
printf("THe Multiplication table from 1 to %d\n",n);

for(j=0;j<12;j++){
  for(i=0;i<n;i++){
    printf("%d\t", ((j+1)*(i+1)));
  }
  printf("\n");
}
  return 0;
  }
