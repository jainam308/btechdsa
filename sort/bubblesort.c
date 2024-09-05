#include<stdio.h>
#include<conio.h>

int main(){
    int n= 5;
    int arr[n];
    int flag;
    printf("enter element of array:");
    for(int i=0; i<n; i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for (int i = 0; i < n-1; i++)
    {
        flag=0;
        for (int j = 0; j<n-1-i; j++)
        {
          if(arr[j]>arr[j+1]){
            int temp= arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            flag=1;
          }

        }
        if (flag==0)
        {
           break;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("\n Element of array are %d ",arr[i]);
    }

    return 0;
        
}