#include <stdio.h>

int main(){
    char check[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q'};
    char alpha;
    int i,j, chec;
    printf("WHat is your letter between A-J: ");
    scanf("%c",&alpha);
    fflush(stdin);
    chec = (sizeof(check)/sizeof(char));
    
    for(int i=0; i<chec; i++){
        if(alpha==check[i]){
                for(int j=0; j<6; j++){
                    printf("%c",check[(i+1)+j]);;
                }
            }
        }
        return 0;
    
    }
