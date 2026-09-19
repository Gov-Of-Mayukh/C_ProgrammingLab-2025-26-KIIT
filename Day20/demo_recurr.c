#include<stdio.h>

int abc(){
    printf("KIIT\n");
    return abc();
}

void main(){
    abc();
}
