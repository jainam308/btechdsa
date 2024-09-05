#include<stdio.h>
int n=5;
 int top=-1;
 int stack[5];
void push(){
  int ele;
  printf("\n element you want to insert:");
  scanf("%d",&ele);
  if (top==n-1)
  {
    printf("\nStack overflow!");
  }
  else
  {
    top++;
    stack[top]=ele;
  }
  
  
}
void pop(){
    if(top==-1){
        printf("\nstack underflow");
    }else
    {
        int item;
        item=stack[top];
        top--;
        printf("\nElement deleted is %d",item);
    }
    


}
void peek(){
    if (top==-1)
    {
      printf("\nstack underflow");
    }
    else
    {
        printf("\ntop element is %d",stack[top]);
    }
    
    
}
void display(){
    if(top==-1){
        printf("\nNo Element");
    }
    else{
        for (int i = top; i >=0; i--)
        {
           printf("\n%d",stack[i]);

        }
        
    }
}
int main()
{
     int choice;
   while (choice!=5)
    {   
        printf("\nenter your choice 1:push 2:pop 3:peek 4:display 5:exit ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("\nExiting..........");
            break;
        
        default:
            printf("\n valid choice!");
            break;
        }
    }  
}