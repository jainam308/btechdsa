#include<stdio.h>
int n=5;
int front=-1;
int rear=-1;
 int queue[5];
void enqueue(){
  int ele;
  printf("\n element you want to insert:");
  scanf("%d",&ele);
  if(rear==n-1){
    printf("Queue overflow");
  }
  else if(front==-1&&rear==-1){
    front++;
    rear++;
    queue[rear]=ele;
  }
  else{
    rear++;
    queue[rear]=ele;
  } 
}
void dequeue(){
   if (front==-1&&rear==-1)
   {
        printf("queue underflow");
   }
   else if (front==rear)
   {
    printf("Element deleted is %d",queue[front]);
     front=rear=-1;
   }
   else{
    printf("Element deleted is %d",queue[front]);
    front++;
   }
   
   
    


}
void peek(){
 if (front==-1&&rear==-1)
    {
     printf("queue underflow");
    }
    else{
        printf("front element is %d",queue[front]);
    }
    
}
void display(){
    if (front==-1&&rear==-1)
    {
     printf("queue underflow");
    }
    else{
        for (int i = front; i <= rear; i++)
        {
           printf("%d",queue[i]);
        }
        
    }
    
}
int main()
{
     int choice;
   while (choice!=5)
    {   
        printf("\nenter your choice 1:enqueue 2:dequeue 3:peek 4:display 5:exit ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
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