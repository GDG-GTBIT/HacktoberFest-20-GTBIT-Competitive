#include<iostream>
using namespace std;
class Node{
    public:
  int data;
    Node* next;
};
Node* head=NULL;
void createNode(Node** head,int data){
  Node* newNode=new Node();
  newNode->data=data;
  if(*head==NULL){
    *head=newNode;
    return;
  }
   newNode->next=*head;
   *head=newNode;
}

//Method-01
int getMiddle(Node *head){
 if(head!=NULL){
  Node* temp=head;
  int len=0;
  while(temp!=NULL){
     len+=1;
     temp=temp->next;
  }
  temp=head;
  len/=2;
  while(len){
      temp=temp->next;
      len-=1;
  }
  return temp->data;
 }
 return -1;
}
//Method-02
int getMiddle2pointer(Node *head){
  if(head!=NULL){
  Node* ans=head;
  Node* temp=head;
  int len=0;
  while(temp!=NULL && temp->next!=NULL){
     temp=temp->next->next;
     ans=ans->next;
  }
  return ans->data;
 }
 return -1;
}
//Method-03
int getMiddleOddEven(Node* head){
  if(head!=NULL){ 
   int cnt=0;
   Node* temp=head;
   while(head!=NULL){
     if(cnt&1)
        temp=temp->next;
    head=head->next;
    ++cnt;
   }
   return temp->data;
  }
  return -1;
}

void pirntList(Node* head){
  while(head!=NULL){
     cout<<head->data<<" ";
     head=head->next;
  }
  cout<<endl;
}
int main(){
int T;
cin>>T;
Node* head=NULL;
while(T--){
int data; 
cin>>data;
createNode(&head,data);
}
pirntList(head); 

cout<<getMiddle(head)<<endl;
cout<<getMiddle2pointer(head)<<endl;
cout<<getMiddleOddEven(head);
}