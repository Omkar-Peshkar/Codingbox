#include<iostream>
using namespace std;

class node
{
  public:
  int data;
  node * next;

  node(int val)
  {
    data=val;
    next=NULL;
  }
};
void insertatend(node* &head,int val)
{
    node * n=new node(val);
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
void insertAtBeginning(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head=n;
    
}
void insertAtMiddle(node* head,int val)
{
    int c=0;
    if(head==NULL)
    {
        cout<<"Linked list is empty";
        return;
    }
    node* temp=head;

    node * n=new node(val);
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    c=c/2;
    temp=head;
    while(c-1>0)
    {
      temp=temp->next;
      c--; 
    }
    n->next=temp->next;
    temp->next=n;

}
void display(node* head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
        return;
    }
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void search(node* head,int val)
{
    node* temp=head;
    while(temp!=NULL)
    {
     if(temp->data==val)
     {
        cout<<"element present in the linked list"<<endl;
        return;
     }
     temp=temp->next;
    }
    cout<<"Elemnt is not present "<<endl;

}
void deleteAtStart(node* &head)
{
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;
        return;
    }
    node *todelete=head;
    head=head->next;
    delete todelete;

}
void deleteAtEnd(node* head)
{
    node* temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    node* todelete=temp->next->next;
    temp->next=NULL;
    delete todelete;
}
void deleteAtMiddle(node* head)
{
    int c=0;
    if(head==NULL)
    {
        cout<<"Linked list is empty";
        return;
    }
    node* temp=head;

    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    c=c/2;
    temp=head;
    while(c-1>0)
    {
      temp=temp->next;
      c--; 
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}
int main()
{
   node * head=NULL;
   insertatend(head,10);
   display(head);
   insertatend(head,20);
    insertAtMiddle(head,15);
    display(head);
   insertatend(head,30);
   display(head);
   insertAtBeginning(head,5);
   display(head);
   search(head,50);
   insertAtMiddle(head,25);
   display(head);
   deleteAtStart(head);
   display(head);
  deleteAtMiddle(head);
   display(head);
  deleteAtEnd(head);
  display(head);
  


    return 0;
}