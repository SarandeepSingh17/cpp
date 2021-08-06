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
int length(node* head)
{
    node* temp=head;
    int l=0;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node* reverseK(node* &head, int k ){
    node* prev=NULL;
    node* curr=head;
    node* nextptr;

    int count=0;
    while(curr!=NULL && count<k)
    {
        nextptr=curr->next;
        curr->next=prev;

        prev=curr;
        curr=nextptr;

        count++;
    }
    if(nextptr!=NULL)
    {
        if(length(nextptr)>=k)
        {
            head->next = reverseK(nextptr,k);
        }
        else
    {
        head->next=nextptr;
    }
    }
    return prev;
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
    insertAtTail(head,5);
    display(head);
    node* newhead=reverseK(head,3);
    display(newhead);
    return 0;
}