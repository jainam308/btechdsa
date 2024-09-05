#include<stdio.h>
#include<conio.h>

int main(){
    int n= 5;
    int arr[n];
    int min;
    printf("enter element of array:");
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
   for (int i = 0; i < n-1; i++)
   {
    min=i;
    for (int j = i+1; j < n; j++)
    {
       if(arr[min]>arr[j]){
            min=j;
       }
    }
   if(min!=i){
    int temp=arr[min];
    arr[min]=arr[i];
    arr[i]=temp;
   }
    
   }
   
 
    
    for (int i = 0; i < n; i++)
    {
        printf("\n Element of array are %d ",arr[i]);
    }
 
    return 0;
        
}


