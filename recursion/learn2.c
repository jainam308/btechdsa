#include<stdio.h>
void name(int i,int count){
    
    if (i>count)
    {
      return;
    }

    printf("jainam");
    printf("\n");
    name(i+1,count);
}



void main() {
     int count;
   printf(" enter numbers you want to print");
   scanf("%d",&count);
   name(1,count);
    return;
}
