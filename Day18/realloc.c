#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, i, *ptr, sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    //if memory cannot be allocated
    if(ptr == NULL){
        printf("Error! Memory cannot be allocated");
        exit(0);
    }

    printf("\nAddresses of Allocated Memory: ");
    for(i=0; i<n; ++i)
        printf("%pc ", ptr+i);

    printf("\nEnter new size: ");
    scanf("%d",&n);

    //reallocating memory
    ptr=realloc(ptr, n*sizeof(int));

    printf("\nAddresses of newly Allocated Memory: ");
    for(i=0; i<n; ++i)
        printf("%pc ", ptr+i);

    //deallocating memory
    free(ptr);
    printf("\n\n");
}
