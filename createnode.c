#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
int main()
{
    struct node*head=NULL;
    head=(struct node*)malloc(sizeof(struct node*));
    head->data=10;
    head->next=NULL;
    struct node*current=NULL;
    current=(struct node*)malloc(sizeof (struct node*));
    current->data=20;
    current->next=NULL;
    head->next=current;
    struct node*current2=NULL;
    current2=(struct node*)malloc(sizeof (struct node*));\
    current2->data=30;
    current2->next=NULL;
    head->next->next=current2;
    struct node*ptr=head;
    while(ptr->next!=NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->next;
    }
}
