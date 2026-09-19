#include<stdio.h>
void main(){
	int a,b;
	printf("Enter to numbers: ");
	scanf("%d%d",&a,&b);
	(a>b) ? printf("\n%d is greater than %d\n\n",a,b) : printf("\n%d is greater than %d\n\n",b,a);
}
