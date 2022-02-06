#include <stdio.h>
#include <stdlib.h>
void int_convert(int in);
void char_convert(char ch);
void float_convert(float flt);




int main(){
    int check;
    char ch;
    float flt;
    int in;
    printf("Type 0 to quit\n");
    printf("Type 1 if you what to input an Integer\n");
    printf("Type 2 if you what to input an Character\n");
    printf("Type 3 if you what to input an Float\n");
    printf("------------------------------------------\n");
do{
    printf("pick a number ");
    scanf("%d",&check);
    switch (check){

    case 0:
         exit(1);
    case 1:
        printf("What number: ");
        scanf("%d", &in);
        int_convert(in);
        break;
    case 2:
        printf("What character: ");
        fflush(stdin);
        scanf("%c",&ch);
        char_convert(ch);
        break;
    case 3:
        printf("What float: ");
        scanf("%f", &flt);
        float_convert(flt);
        break;
        
    
    default:
    printf("THat isn't a parameter that can be satisfied.");
        break;
    }

}while(check!=0);
   




    return 0;
}

void int_convert(int in){
    for(int i=0;i<3;i++){
        in+=3;
        printf("integer: %d\n",in);
        printf("ASCII code: %d\n",'0'+in);
        printf("size of integer: %d\n",sizeof(in));

    }
}

void char_convert(char ch){
    for(int i=0;i<3;i++){
        ch +=3;
        printf("character: %c\n",ch);
        printf("ASCII value: %d\n",ch);
        printf("size of character: %d\n", sizeof(ch));
    }

}

void float_convert(float flt){
    int conv;
       for(int i=0;i<3;i++){
        flt+=3;
        printf("float: %f\n",flt);
        conv = (int)flt;
        printf("ASCII code: %d\n",'0'+conv);
        printf("size of float: %d\n",sizeof(flt));
    } 
}
