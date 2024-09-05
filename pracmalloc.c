#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n;
    arr=(int*)malloc(n*sizeof(int));
    // OR
     // arr=(int*)calloc(n,sizeof(int));
    if (arr==NULL){
        printf("Memory allocation failed");
        return 1;
    }
  
    
   
    printf("Enter size of an array");
    scanf("%d",&n);
     printf("\nEnter element of array");
    for (int i = 0; i < n; i++)
    {
       
       scanf("%d",&arr[i]);
    }
    for ( int i = 0; i < n; i++)
    {
       printf("\n Element of array are %d",arr[i]);
    }
    free(arr);
    return 0;



}