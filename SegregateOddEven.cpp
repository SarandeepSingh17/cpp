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
node *oddeven(node* &head)
{
    // Write your code here.
    node* evenstart=NULL;
    node* evenend=NULL;
    node* oddstart=NULL;
    node* oddend=NULL;

    node* cur=head;
    while (cur!=NULL)
    {
        /* code */
        if(cur->data%2!=0)
        {
            if(oddstart==NULL)
            {
                oddstart=cur;
                oddend=oddstart;
            }
            else{
                oddend=cur;
                oddend=oddend->next;
            }
        }
        else{

            if(evenstart==NULL)
            {
                evenstart=cur;
                evenend=evenstart;
            }
            else{
                evenend=cur;
                evenend=evenend->next;
            }
        }
        cur=cur->next;
    }
    oddend->next=evenstart;
    evenend->next=NULL;
    return oddstart;
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
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);
    node* newhead=oddeven(head);
    display(newhead);
    return 0;
}