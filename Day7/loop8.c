#include<stdio.h>
void main(){
	for(int i=1; i<=20; i++){
		if(i==15)
			continue;
		printf("%d ",i);
	}
	printf("\n\n");
}
