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
void insert_at_end(node*& head,int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void insert_at_pos(node*& head,int data,int pos){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(head == NULL ){
        head = newnode;
        return;
    }
    if (pos == 1){
        newnode->next = head;
        head ->prev = newnode;
        head = newode;
        return;

    }
    node*temp = head;
    node*curr = NULL;
    
    for(int i =1;i<pos-1;i++){
        temp = temp->next;
    }
    if (temp == nullptr) {
        std::cout << "Position out of bounds!\n";
        delete newnode;
        return;
    }
    curr = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = curr;
    if (curr != nullptr) { // If not inserting at end
        curr->prev = newnode;
    }
    
    
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
    insert_at_end(head,70);
    cout<<"at end"<<endl;
    display(head);

    cout<<"insert at position "<<endl;
    insert_at_pos(head,90,3);
    display(head);
}

