#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
//printing linklist
void printLinklist(struct node *head)
{
    while (head != NULL)
    {
        printf("Element is: %d \n", head->data);
        head = head->next;
    }
}
//insert at first
struct node *deleteAtFirst(struct node *head)
{
    struct node *p = head;

    head = head->next;
    free(p);

    return head;
}

// insertion at middle
struct node *deleteAtMiddle(struct node *head, int index)
{
    struct node *p =head;
    struct node *q = head->next;
    int i = 0;
    while(i!= index - 1)
    {
        p = p->next;
        q = q->next;
        i++;
    }

    p->next = q->next;

    return head;
}
// delete at last
struct node *deleteAtLast(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);

    printf("element delete\n");

    return head;
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node *));
    first = (struct node *)malloc(sizeof(struct node *));
    second = (struct node *)malloc(sizeof(struct node *));
    third = (struct node *)malloc(sizeof(struct node *));
    fourth = (struct node *)malloc(sizeof(struct node *));

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = fourth;

    fourth->data = 50;
    fourth->next = NULL;

    printf("before link List: \n");
    printLinklist(head);

    head = deleteAtMiddle(head,1);

    printf("after link List: \n");
    printLinklist(head);

    return 0;
}