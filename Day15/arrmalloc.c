#include<stdio.h>
#include<stdlib.h>

void main(){
    int *p, n, i, sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("Memory not allocated");
        exit(1);
    }
    else{
        printf("Memory successfully allocated using malloc()");
        printf("\nElements of the array before allocation: ");
        for(i=0; i<n; i++)
            printf("%d ", p[i]);
        printf("\n");
        for(i=0; i<n; i++){
            printf("Enter Element %d: ", i+1);
            scanf("%d", &p[i]);
        }

        printf("\nElements of the array after allocation: ");
        for(i=0; i<n; i++){
            printf("%d ", p[i]);
            sum+=p[i];
        }
        printf("\nSum of the array is %d",sum);
    }
    printf("\n\n");
}
