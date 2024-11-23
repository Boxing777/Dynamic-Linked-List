// °ÊºA°t¸m Linked List

# include <stdio.h>
# include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void Creat_node(struct node* head)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = head->data + 1;
    newNode->next = head->next;

    head->next = newNode;
};

int main()
{
    int num = 5;
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 10;
    head->next = NULL;

    struct node* temp = head;
    for (int i = 0; i < num; i++) {
        Creat_node(temp);
        temp = temp->next;
    }

    if (head == NULL) {
        printf("Allocation failed.\n");
        return -1;
    }

    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}