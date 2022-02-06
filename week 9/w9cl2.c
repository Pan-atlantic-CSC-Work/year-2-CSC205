#include <stdio.h>
#include <stdlib.h>
int main(){
    int ap;
    printf("How many applicants: ");
    scanf("%d",&ap);
    int* ptr;
    
         ptr = (int*)malloc(ap*sizeof(int));

    
    for(int j=0;j<ap;j++){
        printf("number of experience: ");
        scanf("%d",&ptr[j]);
    }
int max = ptr[0];
    for(int i=0;i<ap;i++){
      if(max<ptr[i]){
        max = ptr[i];
      }
    }
 printf("%d",max);


}
