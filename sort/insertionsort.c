#include<stdio.h>
#include<conio.h>

int main(){
    int n= 5;
    int arr[n];
  
    printf("enter element of array:");
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 1; i < n; i++)
    {
       int temp =arr[i];
       int j = i-1;
       while(j>=0 && arr[j]> temp)
       {
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=temp;
       
       
    }
    
 
   
 
    
    for (int i = 0; i < n; i++)
    {
        printf("\n Element of array are %d ",arr[i]);
    }
 
    return 0;
        
}


