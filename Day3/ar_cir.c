#include<stdio.h>
void main(){
	float d,ar,per;
	const float pi=3.14;
	printf("Enter diameter of the Circle: ");
	scanf("%f",&d);
	ar=pi*(d/2)*(d/2);
	per=2*pi*(d/2);
	printf("\nArea: %f\nPerimeter: %f\n",ar,per);
}
