#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node *newnode, *head = NULL, *temp; // Initialize head to NULL

void insertAtEnd(int value) {
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL) { // If list is empty, new node becomes the head
        head = newnode;
    } else {
        temp = head;
        while (temp->next != NULL) { // Traverse to the end of the list
            temp = temp->next;
        }
        temp->next = newnode; // Insert at the end
        newnode->prev = temp; // Set previous pointer
    }
}
void insertAtBefore(int value) {
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL) { // If list is empty, new node becomes the head
        head = newnode;
    } else {
      newnode->next=head;
      head->prev=newnode;
      head=newnode;
    }
}
void deleteLastnode() {
    temp = head;
    
    if (head == NULL) {
        printf("List is empty\n");
    }
    // If there's only one node in the list
    else if (head->next == NULL) {
        free(head);
        head = NULL;  // Set head to NULL as the list is now empty
    }
    // If there are multiple nodes
    else {
        while (temp->next != NULL) {
            temp = temp->next;  // Traverse to the last node
        }
        temp->prev->next = NULL;  // Update the second-last node's next to NULL
        free(temp);  // Free the last node
    }
}


void deleteBeforePosition(int position) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    // Check if position is valid
    if (position <= 1) {
        printf("Invalid position. Cannot delete before position 1.\n");
        return;
    }

    struct Node *temp = head;

    // Traverse to the node at the given position
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position is out of bounds
    if (temp == NULL || temp->prev == NULL) {
        printf("Invalid position. No node exists before this position.\n");
        return;
    }

    // Now, temp is the node at position (position - 1)
    struct Node *nodeToDelete = temp->prev;  // The node we want to delete

    // Adjust pointers
    if (nodeToDelete->prev != NULL) { // If not deleting the head
        nodeToDelete->prev->next = temp; // Skip the node to delete
    } else {
        head = temp; // If deleting the head, update head
    }
    
    temp->prev = nodeToDelete->prev; // Update the prev pointer of temp

    free(nodeToDelete); // Free the node
    printf("Node before position %d deleted.\n", position);
}

void display() {
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
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtBefore(30);
    deleteLastnode();
    display();

    return 0;
}
