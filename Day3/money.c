#include<stdio.h>
void main(){
	int a,b,c,d,e,f, sum;
	printf("Enter number of ₹10 note: ");
	scanf("%d",&a);
	a=a*10;
	printf("\nEnter number of ₹20 note: ");
	scanf("%d",&b);
	b=b*20;
	printf("\nEnter number of ₹50 note: ");
	scanf("%d",&c);
	c=c*50;
	printf("\nEnter number of ₹100 note: ");
	scanf("%d",&d);
	d=d*100;
	printf("\nEnter number of ₹200 note: ");
	scanf("%d",&e);
	e=e*200;
	printf("\nEnter number of ₹500 note: ");
	scanf("%d",&f);
	f=f*500;
	sum=a+b+c+d+e+f;
	printf("\nThe Total Money is ₹%d\n",sum);
}
