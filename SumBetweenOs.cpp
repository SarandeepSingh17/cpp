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
node* Sum(node* &head)
{
    node* temp=head->next;
    node* res=head->next;
    int s=0;
    while(temp!=NULL)
    {
        if(temp->data!=0)
        {
            s+=temp->data;
            temp=temp->next;
        }
        else{
            res->data=s;
            res->next=temp->next;
            temp=temp->next;
            res=temp;
            s=0;
        }
    }
    return head->next;
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
int main()
{
    node* head=NULL;
    int arr[]={0,1,2,3,0,4,5,0};
    for(int i=0;i<8;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    node* newhead=Sum(head);
    display(head->next);
    return 0;
}