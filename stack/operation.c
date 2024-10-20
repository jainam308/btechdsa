#include<stdio.h>

int n=5;
int top=-1;
int stack[5];

// Push function
void push(){
  int ele;
  printf("\nElement you want to insert: ");
  scanf("%d",&ele);
  if (top == n-1) {
    printf("\nStack overflow!");
  } else {
    top++;
    stack[top] = ele;
  }
}

// Pop function
void pop(){
    if(top == -1){
        printf("\nStack underflow");
    } else {
        int item;
        item = stack[top];
        top--;
        printf("\nElement deleted is %d", item);
    }
}

// Peek function
void peek(){
    if (top == -1) {
      printf("\nStack underflow");
    } else {
        int pos;
        printf("Enter the ith element you want to return");
        scanf("%d",&pos);
        printf("\nTop element is %d", stack[pos]);
    }
}

// Display function
void display(){
    if(top == -1){
        printf("\nNo Element");
    } else {
        for (int i = top; i >= 0; i--) {
           printf("\n%d", stack[i]);
        }
    }
}

// Change function based on the provided algorithm
void change(){
    if (top == -1) {
        printf("\nStack underflow");
    } else {
        int pos, new_val;
        printf("\nEnter the position (0 to %d) where you want to change: ", top);
        scanf("%d", &pos);

        if (pos >= 0 && pos <= top) {
            printf("\nEnter the new value: ");
            scanf("%d", &new_val);
            stack[pos] = new_val;
            printf("\nValue at position %d changed to %d", pos, new_val);
        } else {
            printf("\nInvalid position!");
        }
    }
}

int main() {
     int choice;
     while (choice != 6) {  // Change the exit condition to 6 to include the new option
        printf("\nEnter your choice 1:push 2:pop 3:peek 4:display 5:change 6:exit ");
        scanf("%d",&choice);
        switch (choice) {
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
            change();  // Add the change case here
            break;
        case 6:
            printf("\nExiting..........");
            break;
        default:
            printf("\nValid choice!");
            break;
        }
    }  
    return 0;
}
