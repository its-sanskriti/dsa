#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void insert_at_begin(int data , node*& head){
    node* newnode = new node();
   newnode->data = data;
   newnode->next = head;
   
   head = newnode;
   

}

void insert_at_end(int data ,node*& head){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    node*temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void insert_at_pos(int data ,int pos,node*& head ){
    node *newnode = new node();
    newnode ->data = data;
    newnode ->next = NULL;

    node* temp = head;
    for(int i =1;i<pos-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

}
void insert(int data,node*&head){
    node *newnode = new node();
    newnode ->data = data;
    newnode ->next = NULL;

    if(head == NULL){
        head = newnode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL)
    {
       temp = temp ->next;
    }
     temp->next = newnode;
}
void delete_first(node*& head){
    node* temp = head;
    head = temp->next;
    delete(temp);

}
void delete_last(node*& head){
    node* temp = head;
    while(temp-> next != NULL){
        temp = temp->next;
    }
    temp->next =NULL;
}
void display(node*&  head){
    node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main(){
 node* head = NULL;
 insert(12,head);
 insert(32,head);
 insert(42,head);

 insert_at_begin(5,head);
 insert_at_begin(10,head);
 insert_at_end(55,head);
 insert_at_end(85,head);
 insert_at_pos(41,5,head);

 display(head);
 cout<<"after deletion"<<endl;
 delete_first(head);
 display(head);
 cout<<"after deleting last"<<endl;
 delete_last(head);
 display(head);
 return 0;

}
