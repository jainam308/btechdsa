#include<stdio.h>
#include<conio.h>

int main(){
    
    int n= 5;
    int arr[n];
    int min_index=0;
    printf("enter element of array:");
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++)
    {

        min_index=i;
        
        for (int j = i+1; j <n; j++)
        {
            

            if(arr[min_index]>arr[j]){
             min_index=j;
            }
        }
        if(min_index != i)
        {
            int temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;

        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n Element of array are %d ",arr[i]);
    }

    return 0;
        
}