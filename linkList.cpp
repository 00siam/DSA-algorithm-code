#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
//printing linklist
void printLinklist(struct node *head){
    while (head != NULL)
    {
        printf("Element is: %d \n",head->data);
        head = head ->next;
    }
}
//insert at first
struct node* insertAtFirst(struct node* head, int value){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = value;
    p->next = head;

    return p;
}

// insertion at middle
struct node*insertAtMiddle(struct node*head,int value,int index){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = value;

    struct node* ptr = head;
    int i;
    for(i=0;i<index-1;i++){
        ptr = ptr->next;
    }

    p->next = ptr->next;
    ptr->next = p;

    return head;


}

// insert at last
struct node* insertAtLast(struct node* head, int value){
    struct node* p = (struct node*)malloc(sizeof(struct node));
    p->data = value;
    
    struct node* ptr = head;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = p;
    p->next = NULL;

    return head;
}
int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node*)malloc(sizeof(struct node*));
    first = (struct node*)malloc(sizeof(struct node*));
    second = (struct node*)malloc(sizeof(struct node*));
    third = (struct node*)malloc(sizeof(struct node*));
    fourth = (struct node*)malloc(sizeof(struct node*));

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

    head = insertAtMiddle(head,25,2);

    printf("after link List: \n");
    printLinklist(head);

    return 0;
}