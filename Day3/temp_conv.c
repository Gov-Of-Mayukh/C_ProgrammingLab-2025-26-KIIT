#include<stdio.h>
void main(){
	int ch;
	float c,f;
	printf("1. Celcius to Fahrenheit\n2. Fahrenheit to Celcius\nEnter Choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\nEnter temperature in °C: ");
			scanf("%f",&c);
			f=c*(9/5)+32;
			printf("\n%f°C is %f°F\n\n",c,f);
			break;
		case 2:
			printf("\nEnter temperature in °F: ");
			scanf("%f",&f);
			c=(f-32)*(5/9);
			printf("\n%f°F is %f°C\n\n",f,c);
			break;
	}
}
