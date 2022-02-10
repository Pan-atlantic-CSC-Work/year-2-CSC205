#include <stdio.h>

int main(){
    int a=10;
    int *p;
    p=&a;

    unsigned int b = (unsigned int)a;

    printf("Address stored in a variable p is: %p\n ", p);

    
}