#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, newsize;
    printf("enter the size of an array : ");
    scanf("%d",&n);
    
    //now allocate the memory
    
    int *arr = (int*)malloc(n* sizeof (int) );
    for (int i=0; i<n; i++){
        printf("enter the value at arr[%d]index :",i);
        scanf("%d",&arr[i]);
        
    }
    for(int i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    printf("\nenter new size :");
    scanf("%d",&newsize);
    
    //now reallocate the memory
    
    int *newArr = (int*)realloc(arr, newsize*sizeof(int));
    for(int i=n; i<newsize; i++){
        printf("enter the values at arr[%d] index :",i);
        scanf("%d",&newArr[i]);
    }
        //final values in array
        
        printf(" all values in array :%d\n");
        for(int i=0; i<newsize; i++){
        printf("%d",newArr[i]);
            
        }
        
