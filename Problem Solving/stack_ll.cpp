#include<iostream>
using namespace std;
template<typename T>
struct node{
    T data;
    node * next;

    node(T data){
        this->data = data;
        this->next = NULL;
    }
};
template<typename T>
struct stack{
private:
    node<T> * head;
    int size;
public:
    stack(){
        head = NULL;
        size = 0;
    }
    bool isEmpty(){
        return head==NULL;
    }
    int Size(){
        return size;
    }
    void push(T data){
        node<T> * temp = new node<T>(data);
        temp->next = head;
        head = temp;
        size++;
        return;
    }
    void pop(){
        if(!isEmpty()){
            node<T> * temp = head;
            head = head->next;
            delete temp;
            size--;
        }
        return;
    }
    T top(){
        if(!isEmpty()){
            return head->data;
        }
        return NULL;
    }
};
int main(){

stack<int> s;
cout<<s.Size()<<endl;
s.push(1);
s.push(2);
s.push(3);
cout<<s.top()<<endl;
s.pop();
cout<<s.top()<<endl;
}
