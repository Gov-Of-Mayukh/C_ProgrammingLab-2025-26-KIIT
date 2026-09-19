#include<stdio.h>
void main(){
	float l, b, ar, per;
	printf("Enter Length: ");
	scanf("%f",&l);
	printf("\nEnter breadth: ");
	scanf("%f",&b);
	ar=l*b;
	per=2*(l+b);
	printf("\nThe Area: %f\nThe Perimeter: %f\n",ar,per);
}
