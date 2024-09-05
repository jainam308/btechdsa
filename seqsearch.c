#include<stdio.h>

int main(){
    int arr[5];
    
    int x;
      printf("Enter five element of an array");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
        printf("\nEnter the element to be search:");
        scanf("%d",&x);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==x)
        {
            printf("\nthe element %d found at index %d",x,i);
            break;
        }
    
    }
     
    return 0;
}