#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c){
		printf("\n%d",a);
		if (b<c)
			printf(" %d %d\n\n",b,c);
		else
			printf(" %d %d\n\n",c,b);
	}
	else if(b<a && b<c){
		printf("\n%d",b);
		if (a<c)
			printf(" %d %d\n\n",a,c);
		else
			printf(" %d %d\n\n",c,a);
	}
	else{
		printf("\n%d",c);
		if (b<a)
			printf(" %d %d\n\n",b,a);
		else
			printf(" %d %d\n\n",a,b);
	}
}
