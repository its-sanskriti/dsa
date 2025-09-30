#include<iostream>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};
void insert_at_begin(node*& head,int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head == NULL){
        head = newnode;      
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
void insert(node*& head,int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    if(head == NULL){
       newnode->prev = NULL;
       head = newnode;
       return;
    }
    node* temp = head;
    while(temp->next!= NULL){
           temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int main(){
    node* head = NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    display(head);
    insert_at_begin(head,5);
    cout<<"inserting at begin"<<endl;
    display(head);
}

