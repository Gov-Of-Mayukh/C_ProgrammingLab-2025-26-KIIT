#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c,s,ar;
	printf("Enter 3 sides of the Triangle: ");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b)>c && (b+c)>a && (c+a)>b){
		printf("\nTriangle is possible. Calculating Area...");
		// USING HERON'S FORMULA
		s=(a+b+c)/2;
		ar=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("\nThe area of the triangle is %d\n\n", ar);
	}
	else
		printf("\nTriangle not possible!\n\n");
}
