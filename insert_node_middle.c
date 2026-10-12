#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;

} Node;
Node *create_linked_list(int node_number)
{
    printf("Enter node value :");
    Node *head = NULL, *temp, *newnode;
    for (int i = 0; i < node_number; i++)
    {
        newnode = (Node *)malloc(sizeof(Node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}
void insert_linked_list_at_middle(Node **head, int value, int position)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = value;
    newnode->next = NULL;
    if(position == 1)
    {
        newnode->next = *head;
        *head = newnode;
        return;
    }
    Node *temp = *head;
    for(int i = 1; i < position - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int node_number, value,position;
    printf("Enter how many nodes:");
    scanf("%d", &node_number);
    Node *head = create_linked_list(node_number);
    printf("print the linked_list:");
    print_list(head);
    printf("Node value and position for insert middle :");
    scanf("%d%d", &value,&position);
    insert_linked_list_at_middle(&head, value,position);
    printf("After insert node at the middle :");
    print_list(head);

    return 0;
}