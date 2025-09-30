#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};

void insert(node*& head,int data){
    node* newnode = new  node();
    newnode->data = data;
    newnode->next = NULL;

    if(head == NULL){
        head = newnode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
void find_ele(node* head, int val){
    if(head == NULL){
        cout<<"list is empty";
        return;
    }
    if(head->data == val){
        cout<<"element at found at pos 1"<<endl;
        return;
    }
    node* temp = head;
    int count = 0;
    while(temp!= NULL && temp->data != val){
        count++;
        temp = temp->next;
        
    }
    if(temp == NULL){
        cout<<"no such element in list"<<endl;
        return;
    }
    cout<<"element found at "<<count<<endl;
}
// modified
void find_ele1(node* head, int val) {
    if (head == NULL) {
        cout << "list is empty" << endl;
        return;
    }

    node* temp = head;
    int pos = 1;   // positions start from 1

    while (temp != NULL) {
        if (temp->data == val) {
            cout << "element found at pos " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }

    cout << "no such element in list" << endl;
}
int  main(){
   node*head = NULL;
   insert(head,10);
   insert(head,20);
   insert(head,30);
   insert(head,40);
   insert(head,50);
   display(head);
   find_ele(head,50);
}