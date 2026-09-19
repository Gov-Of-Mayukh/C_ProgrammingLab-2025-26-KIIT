#include<stdio.h>
int shw(int x, int y){
    int c=1;
    for(int i=0; i<y; i++)
        c*=x;
    return c;
}
void main(){
    int a,b,c;
    printf("Enter a number and it's exponent: ");
    scanf("%d%d",&a,&b);
    c=shw(a,b);
    printf("\nResult: %d",c);
    printf("\n\n");
}
