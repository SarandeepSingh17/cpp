#include<iostream>
using namespace std;
class Node
{
    public: 
    int data;
    Node* next;
    Node(int val)                   //Parametrized Constructor
    {
        data=val;
        next=NULL;
    }
};
int length(Node* head)
{
    int l=0;
    Node* temp=head;
        while(temp!=NULL)
        {
            l++;
            temp=temp->next;
        }
    return l;
}
Node* reverse(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
		return head;
    }
    Node* newhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
Node* rearrangeList(Node* head)
{
    // Write your code here.
    int l=length(head);
    int mid;
    if(l%2==0)
    {
        mid=l/2;
    }
    else
    {
        mid=l/2+1;
    }
   	int c=1;
    Node* temp=head;
    Node* tmp;
    while(c<mid)
    {
        temp=temp->next;
        c++;
    }
    tmp=temp->next;
    temp->next=NULL;
    Node* newhead=reverse(tmp);
    Node* d=new Node(-1);
    Node* it=d;
    while(newhead!=NULL || head!=NULL)
    {
        if(head!=NULL)
        {
            it->next=head;
            it=it->next;
            head=head->next;
        }
        if(newhead!=NULL)
        {
            it->next=newhead;
            it=it->next;
            newhead=newhead->next;
        }
    }

    return d->next;
}
void insertAtHead(Node* &head, int val)
{
    Node*n =new Node(val);
    n->next=head;
    head=n;
}
void insertAtTail(Node* &head, int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    display(head);
    Node* newhead=rearrangeList(head);
    display(newhead);
    return 0;
}