//WITHOUT USING THRID VARIABLE AND ± OPERATORS
#include<stdio.h>
void main(){
	int a,b;
	printf("Enter 2 integers: ");
	scanf("%d%d", &a,&b);
	printf("\nBefore swapping, a=%d, b=%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\nAfter swapping, a=%d, b=%d\n\n",a,b);
		//CAN ALSO USE (TO THE POWER) AND (ROOT) LOGIC
}
