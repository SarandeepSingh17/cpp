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
void swap(node *a, node *b)
{
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}
int length(node* head)
{
    int l=0;
    node* temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node* bubblesort(node* &head)
{
    int n=length(head);
    
    for(int i=0;i<n-1;i++)
    {
        node* temp=head;
        for(int j=0;j<n-1-i;j++)
        {
            node* p1=temp;
            node* p2=p1->next;
            if(p1->data > p2->data)
            {
                swap(p1,p2);
            }
        
            temp=temp->next;
        }
    }
    return head;
}

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
    node* head1 =bubblesort(head);
    display(head1);
    return 0;
}