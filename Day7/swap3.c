#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("\nBefore Swapping, a=%d, b=%d",a,b);
	c=a;
	a=b;
	c=c;
	printf("\nAfter Swapping, a=%d, b=%d\n\n",a,b);
}
