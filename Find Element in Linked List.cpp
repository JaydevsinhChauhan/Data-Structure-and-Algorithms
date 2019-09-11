#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void push(struct Node **head,int data)
{
    struct Node *temp=new Node();
    temp->data=data;
    temp->next=NULL;
    temp->next=*head;
    *head=temp;
}
void search(struct Node *head)
{
    int ele;
    cout<<"Enter element to be searched\n";
    cin>>ele;
    while(head!=NULL)
    {
        if(head->data==ele)
        {
            cout<<"Element found"; return;
        }
        head=head->next;
    }
    cout<<"ELement not found";
}
int main(void)
{
    struct Node *head=NULL;
    push(&head,2);
    push(&head,3);
    push(&head,7);
    push(&head,1);
    push(&head,9);
    search(head);
    return 0;
}
