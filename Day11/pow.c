#include<stdio.h>

int shw(int x, int y){
    int s=1;
    for(int i=1; i<=y; i++){
        s*=x;
    }
    return s;
}

void main(){
    int x,y;
    printf("Enter Number: ");
    scanf("%d",&x);
    printf("Raise to the Power: ");
    scanf("%d",&y);
    x=shw(x,y);
    printf("Answer: %d",x);
    printf("\n\n");
}
