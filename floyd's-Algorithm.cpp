#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void makeCycle(node* &head, int pos)
{
    node* temp=head;
    node* startnode;
    int c=1;
    while(temp!=NULL)
    {
        if(c==pos)
        {
            startnode=temp;
        }
        temp=temp->next;
        c++;
    }
    temp->next=startnode;
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
bool detectCycle(node* &head)
{
    node* slow=head;
    node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(fast==slow)
    {
        return true;
    }
    return false;
}
void removeCycle(node* &head)
{
    node* fast=head;
    node* slow=head;

    do
    {
        /* code */
        slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
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
int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    makeCycle(head,3);
    detectCycle(head);
    removeCycle(head);
    display(head);
    return 0;
}