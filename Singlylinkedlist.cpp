#include<iostream>
using namespace std;
class node
{
    public: 
    int data;
    node* next;
    node(int val)                   //Parametrized Constructor
    {
        data=val;
        next=NULL;
    }
};

//Reversed Linked List using Iteration
node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* nextptr;

    while(curr!=NULL)
    {
        nextptr=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextptr;
    }
    return prev;
}
// Recursion Reversed Linked List
node* ReverseRecursive(node* &head)
{
     if(head==NULL || head->next==NULL)
     {
         return head;
     }
    node* newhead=ReverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
// deletion at head
void deleteAtHead(node* &head)
{
    node* todelete=head;
    head=head->next;

    delete todelete;
}
void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}
void insertAtHead(node* &head, int val)
{
    node*n =new node(val);
    n->next=head;
    head=n;
}
void insertAtTail(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
bool search(node* head, int key)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    node* newhead =ReverseRecursive(head);
    display(newhead);
    return 0;
}