#include<stdio.h>
#include<stdlib.h>

// Define the structure for a node
struct node {
    int data;
    struct node* next;
};

// Global pointers to head and temp
struct node *head = NULL, *temp;

// Function to insert a new node at the beginning of the list
void insertAtBegin() {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));

    // Input data for the new node
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    // Insert at beginning
    newnode->next = head;
    head = newnode;
}

// Function to insert a new node at the end of the list
void insertAtEnd() {
    struct node *newnode;
    newnode = (struct node*) malloc(sizeof(struct node));

    // Input data for the new node
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;  // If the list is empty, make the new node the head
    } else {
        temp = head;
        while (temp->next != NULL) {  // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newnode;  // Link the last node to the new node
    }
}

// Function to insert a new node at a specific position
void insertAtPosition() {
    int pos, i = 1, count = 0;
    struct node *newnode, *temp;

    // Count the total number of nodes in the list
    temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    printf("Enter position to insert: ");
    scanf("%d", &pos);

    // Validate the position
    if (pos < 1 || pos > count + 1) {
        printf("Invalid position!\n");
        return;
    }

    newnode = (struct node*) malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    if (pos == 1) {
        // Insert at the beginning
        newnode->next = head;
        head = newnode;
    } else {
        temp = head;
        // Traverse to the node just before the insertion position
        for (i = 1; i < pos - 1; i++) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
void insertInOrder() {
    struct node *newnode, *current, *previous;
    newnode = (struct node*) malloc(sizeof(struct node));

    // Input data for the new node
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    // If the list is empty or the new node should be the first node
    if (head == NULL || newnode->data < head->data) {
        newnode->next = head;
        head = newnode;
    } else {
        // Traverse to find the correct position for the new node
        previous = NULL;
        current = head;
        while (current != NULL && current->data < newnode->data) {
            previous = current;
            current = current->next;
        }
        newnode->next = current;
        previous->next = newnode;
    }
    printf("Node inserted in ascending order.\n");
}

// Function to delete the first node in the list
void deleteAtBegin() {
    if (head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
    } else {
        temp = head;            // Store the current head
        head = head->next;      // Move head to the next node
        free(temp);             // Free the old head node
        printf("First node deleted.\n");
    }
}

// Function to delete the last node in the list
void deleteAtEnd() {
    struct node *prevnode;
    if (head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
    } else if (head->next == NULL) {  // If there's only one node
        free(head);
        head = NULL;
        printf("Last node deleted.\n");
    } else {
        temp = head;
        while (temp->next != NULL) {  // Traverse to the last node
            prevnode = temp;
            temp = temp->next;
        }
        prevnode->next = NULL;
        free(temp);  // Delete the last node
        printf("Last node deleted.\n");
    }
}

// Function to delete a node at any specific position
void deleteAtAnyPosition() {
    int pos, i = 1;
    struct node *nextnode;
    
    if (head == NULL) {
        printf("The list is empty. Nothing to delete.\n");
        return;
    }

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    if (pos == 1) {  // If deleting the first node
        temp = head;
        head = head->next;
        free(temp);
        printf("Node at position %d deleted.\n", pos);
        return;
    }

    temp = head;
    for (i = 1; i < pos; i++) {
       nextnode = temp;
        temp = temp->next;
        if (temp == NULL) {
            printf("Invalid position!\n");
            return;
        }
    }

   nextnode->next = temp->next;
    free(temp);
    printf("Node at position %d deleted.\n", pos);
}

// Function to display the linked list
void displayList() {
    if (head == NULL) {
        printf("The list is empty.\n");
    } else {
        temp = head;
        printf("The elements in the list are: ");
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    int choice;

    while (1) {
        // Display menu
        printf("\nMenu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Insert at a specific position\n");
        printf("4. Display the list\n");
        printf("5. Delete at the beginning\n");
        printf("6. Delete at the end\n");
        printf("7. Delete at a specific position\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertAtBegin();
                break;
            case 2:
                insertAtEnd();
                break;
            case 3:
                insertAtPosition();
                break;
            case 4:
                displayList();
                break;
            case 5:
                deleteAtBegin();
                break;
            case 6:
                deleteAtEnd();
                break;
            case 7:
                deleteAtAnyPosition();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
