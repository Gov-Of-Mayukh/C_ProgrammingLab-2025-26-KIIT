#include<stdio.h>
void main(){
	int a, b, c, i, sum=1;
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	if(a<b){
		c=a;
		a=b;
		b=c;
	}
	c=0;

	for(i=1;i<=a/2;i++){
		if(a%i==0 && b%i==0){
			sum*=i;
			c=i;
		}
	}
	printf("\nThe GCD of %d amd %d is %d",a,b,c);
	printf("\nThe LCM of %d and %d is %d\n\n",a,b,sum);
}
