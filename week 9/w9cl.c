#include <stdio.h>
#include <stdlib.h>




int main(){
    float matrica[3][2]={{667, 422}, {233.5, 515}, {183.4, 335}};
    float matricb[3][2]={{100, 151.6}, {245.5, 312}, {333, 578.8}};
    float* ptr[3];
    for(int i=0; i<3; i++){
         ptr[i] = (float*)malloc(2*sizeof(float));
    }

    if(ptr==NULL){
        printf("memory not allocated");
        exit(0);

    }else{
        printf("Memory Successfully allocated using malloc");

        for(int i=0; i<3; i++){
            for(int j=0;j<2; j++){
                ptr [i][j] = matrica[i][j]+matricb[i][j];
            }
        }
        printf("The elements of the array are: \n");
        for(int i=0; i<3; i++){
            for(int j=0;j<2; j++){
                printf("%.2f\n",ptr[i][j]);
            }
        }
    }
}

