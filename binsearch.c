#include<stdio.h>

int binarysearch(int arr[],int n,int x){
     int left=0,right=n-1,mid;
      while (left<=right)
        {
          mid=(left+right)/2;
          if(x==arr[mid]){
            printf("Element %d found at index %d",x,mid);
            break;
          }
          else if(x>arr[mid]){
            left=mid+1;
          }
          else{
            right=mid-1;
          }
        }
        if (left>=right)
        {
           printf("Element not found");
        }
}
// int linearsearch(int arr[],int n,int x){
//     for (int i = 0; i < n; i++)
//     {
//        if (arr[i]==x)
//        {
//         printf("Element found at index %d",i);
//         break;
//        }
       
//     }
    
    
// }
int main(){
    int arr[5],x;
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("enter element of array");
    for(int i=0; i<5; i++) {
        scanf("%d",&arr[i]);}
        printf("\n");
        printf("enter element to be searched");
        scanf("%d",&x);
       
      
    binarysearch(arr,n,x);
    // linearsearch(arr,n,x);
    return 0;
        

}