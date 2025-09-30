#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};

void insert(node*& head,int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(node*& head){
    node* temp = head;
    int count = 0;
    while(temp != NULL){
        cout<<temp->data<<endl;
        count++;
        temp = temp->next;
    }
    cout<<"no of elemnts is "<<count<<endl;
}
int length_recursive(node* head){
    if(head == NULL){
        return 0;
    }
    return 1+ length_recursive(head->next);
}

int main(){
    node* head = NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    int count = length_recursive(head);
    cout<<"length is "<<count<<endl;
    display(head);
    
    return 0;
}