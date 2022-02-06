#include <stdio.h>

char* commsers[5]={"Aigbogun Alamba Daudu","Murtala Afeez Bendu","Okorocha Calistus Ogbona","Adewale Jimoh Akanbi","Osazuwa Faith Etieye"};
char* mnstry[5]={"Internal affairs","Justice","Defense","Power & Steel","Petroleum"};
char* zone[5]={"South West","North East","SOuth South","South West","South East"};
char* dataset[3][5];



int main(){

for(int i=0;i<5;i++){
        *(dataset[0] + i)=commsers[i];
         *(dataset[1] + i)=mnstry[i];
         *(dataset[2] + i)=zone[i];
}


for(int j=0;j<3;j++){
    for(int k=0;k<5;k++){
        printf(*(dataset[j]+k)," ");
        
    }
    printf("\n");
}

    return 0;
}







