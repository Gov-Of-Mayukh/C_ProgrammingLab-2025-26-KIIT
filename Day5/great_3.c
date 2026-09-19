#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c)	?	printf("\n%d is the greatest\n\n",a)
			:	(b>a&&b>c)	?	printf("\n%d is the greatest\n\n",b)
						:	printf("\n%d is the greatest\n\n",c);
}
