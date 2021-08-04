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
bool isPalindrome(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return true;
    }
    int l=length(head);
    int mid=l/2;
    if(l==2)
    {
        if(head->data==head->next->data)
        {
            return true;
        }
        return false;
    }
    node* st=head;
    int j=0;
    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    while(j<mid)
    {
          nextptr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextptr;
            j++;
        }
    node* temp;
    if(l%2==0){
        temp=nextptr;
    }

    else{
        temp=nextptr->next;
        } 
    while(prev!=NULL && temp!=NULL)
    {
        if(prev->data!=temp->data)
        {
            return false;
        }
        prev=prev->next;
        temp=temp->next;
    }
    return true;

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
    int arr[]={1,2,2,1};
    for(int i=0;i<4;i++)
    {
        insertAtTail(head,arr[i]);
    }
    display(head);
    cout<<isPalindrome(head)<<endl;
    return 0;
}