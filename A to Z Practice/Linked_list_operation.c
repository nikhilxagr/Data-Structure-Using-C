#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int data;
    struct Node *next;
};


struct Node *insertAtBeginning(struct Node *head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}


struct Node *insertAtEnd(struct Node *head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
        return newNode;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

struct Node *deleteNode(struct Node *head, int value)
{
    struct Node *temp = head, *prev = NULL;

    if (temp != NULL && temp->data == value)
    {
        head = temp->next;
        free(temp);
        return head;
    }

    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value not found\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);
    return head;
}


void searchNode(struct Node *head, int value)
{
    int pos = 1;
    while (head != NULL)
    {
        if (head->data == value)
        {
            printf("Element %d found at position %d\n", value, pos);
            return;
        }
        head = head->next;
        pos++;
    }
    printf("Element not found\n");
}

void displayList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;
    int choice, value;

    while (1)
    {
        printf("\n--- Linked List Operations ---\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Delete a Node\n");
        printf("4. Search an Element\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            head = insertAtBeginning(head, value);
            break;

        case 2:
            printf("Enter value: ");
            scanf("%d", &value);
            head = insertAtEnd(head, value);
            break;

        case 3:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            head = deleteNode(head, value);
            break;

        case 4:
            printf("Enter value to search: ");
            scanf("%d", &value);
            searchNode(head, value);
            break;

        case 5:
            displayList(head);
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }

    return 0;
}
