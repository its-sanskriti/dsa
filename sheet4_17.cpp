#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void insert(node*& head,int data){
    node* newnode = new node();
    newnode->data = data;
    newnode->next = head;

    if(head == NULL){
        head = newnode;
        newnode->next = head;
        return;
    }
    node* temp = head;
    while(temp->next!= head){
        temp = temp->next;
    }
    temp->next = newnode;
    
    
}
void display(node* head){
    node* temp = head;
    
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main(){
    node* head = NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    display(head);
    return 0;
}