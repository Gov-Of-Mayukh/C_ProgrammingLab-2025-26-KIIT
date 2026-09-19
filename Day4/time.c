#include<stdio.h>
void main(){
	int s,h,m, copy;
	printf("\nEnter Seconds: ");
	scanf("%d",&s);
	copy=s;
	h=s/3600;
	s=s-(h*3600);
	m=s/60;
	s=s-(m*60);
	printf("\n%ds in HH.MM.SS format is %dhr.%dmin.%ds\n",copy,h,m,s);
}
