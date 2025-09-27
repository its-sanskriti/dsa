#include<iostream>
using namespace std;


struct node{
    int data;
    node* next;
    
};
void insert_node(int data ,node*& head){
         
        node* newnode = new node();
        newnode->data = data;
        newnode->next = NULL;
      if(head == NULL){
            head = newnode;
            return;
         }
        node*temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
}
void display(node*head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}
int main(){
      node*head = NULL;
      insert_node(10, head);
      insert_node(20, head);
      insert_node(30, head);
      insert_node(50,head);
      display(head);

    return 0;
}