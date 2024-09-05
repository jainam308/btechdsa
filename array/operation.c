// #include<stdio.h>
// int main(){
    
//     int arr[5]={10,20,30,40,50};
//     int x=60;
//     int p=2;
//     for (int i = 4; i <p ; i--)
//     {
//        arr[i+1]=arr[i];
      
//     }
//     arr[p]=x;
//     for (int i = 0; i < 5; i++)
//     {
//       printf("%d",arr[i]);
//     }
    
    
//     return 0;
// }
#include<stdio.h>
int main(){
    
    int arr[5]={10,20,30,40,50};
    int n=5;
    int x=60;
    int p=2;
    for (int i = p; i <n ; i++)
    {
       arr[i]=arr[i+1];
      
    }
      n=n-1;
    for (int i = 0; i < n; i++)
    {
      printf("%d",arr[i]);
    }
    
    
    return 0;
}