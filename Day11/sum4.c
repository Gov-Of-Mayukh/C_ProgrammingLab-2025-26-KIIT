#include<stdio.h>

int sum(int w, int x, int y, int z){
    return w+x+y+z;
}

void main(){
    int a,b,c,d;
    printf("Enter 4 int numbers: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    a=sum(a,b,c,d);
    printf("Their sum is %d",a);
    printf("\n\n");
}
