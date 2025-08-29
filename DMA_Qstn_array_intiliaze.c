//1. Create a 1D Array Using malloc and Initialize 
#include<stdio.h>
#include<stdlib.h>

int main (){
    int n ;
    printf("Enter size of array : ");
    scanf("%d",&n);

    int *arr = (int *)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory Allocation Failed ");
        return 1 ;
    }
    printf("Enter no Element : %d\n ",n);
    printf("Array Element :  ");
    for(int i = 0 ; i<n ; i++){
     scanf("%d",&arr[i]);
    }

    printf("Array Comntent : ");
    for(int i = 0 ; i< n ; i++){
        printf("%d      ",arr[i]);
    }

    free(arr);
    return 0 ;
}
