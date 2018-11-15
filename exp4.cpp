#include <iostream>
using namespace std;

struct node{
   node *prev;
   int data;
   node *next;
};

void push(node **head, int newData){
   node *newNode = new node;
   newNode->data=newData;
   newNode->prev=NULL;
   newNode->next=*head;
   *head=newNode;
}

void printList(node *temp){
   while(temp!=NULL){
       cout<<temp->data<<" ";
       temp=temp->next;
   }
}

void search(node *headRef, int val)
{
   int index=0;
   while(headRef!=NULL)
   {
       if(headRef->data==val)
       {
           cout<<val<<" is present at index "<<index<<".\n";
           return;
       }
       index++;
       headRef=headRef->next;
   }
   cout<<val<<" doesn't exist in the list.\n";
}

void append(node *head, int newData)
{

}

int main(){
   node *head=NULL;
   push(&head,0);
   push(&head,1);
   push(&head,2);
   push(&head,3);
   push(&head,4);
   for(int i=0;i<10;i++)
//    search(head, i);
   printList(head);
   return 0;
}
