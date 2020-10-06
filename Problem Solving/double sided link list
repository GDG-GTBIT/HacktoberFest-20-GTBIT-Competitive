#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node * prev;
    node(){

    }
    node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
node * createll(){
    cout<<"Enter a number and -1 to exit"<<endl;
    int data;
    cin>>data;
    node * head = NULL;
    if(data!=-1){
        head = new node(data);
    }else{
        return head;
    }
    node * tail  = head;
    cin>>data;
    while(data!=-1){
        node * temp = new node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = tail->next;
        //tail = temp
        cin>>data;
    }
    return head;
}
void print(node * head){
    while(head){
        cout<<head->data<<"-->";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
node * head = createll();
cout<<head->next->next->prev->prev->data<<endl;
}
