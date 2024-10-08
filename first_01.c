#include <stdio.h>
#include <stdlib.h>  // For malloc

struct Node {
    int data;
    struct Node *next;
};

struct Node* head;

void Insert(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));  // Use 'struct Node' explicitly
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print() {
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL) {
        printf("%d ", temp->data);  // Correctly print the data of each node
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    head = NULL;  // Initialize head to NULL
    int n, i, x;
    printf("How many numbers? ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter the number: \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }

    return 0;
}
