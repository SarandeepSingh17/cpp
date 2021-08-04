#include<bits/stdc++.h>
using namespace std;
class node
{
    public: 
    int data;
    node* next;
    node* prev;
    node(int val)                    //Parametrized Constructor
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertAtHead(node* &head,int val)
{

    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    {
        head->prev=n;
    }
    head=n;
}
void insertAtTail(node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    } 
    temp->next=n;
    n->prev=temp;
}
void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<endl;
}
void deleteathead(node* &head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;

    delete todelete;
}
void deletenode(node* &head, int pos)
{
    if(pos==1)
    {
        deleteathead(head);
        return;
    }
    int c=1;
    node* temp=head;
    while(temp!=NULL && c!=pos)
    {
        temp=temp->next;
        c++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
    temp->next->prev=temp->prev;
    }
    delete temp;
}
int main()
{
    node* head=NULL;
    insertAtHead(head,5);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    deletenode(head,1);
    display(head);
    return 0;
}