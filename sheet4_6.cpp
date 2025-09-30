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
//iterative
node* reverse(node* head){
    node*prev = NULL;
    node*temp = head;
    
    while(temp!= NULL){
        node*front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
return prev;

}
node* recursive_reverse(node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    } 
    node*newhead= recursive_reverse(head->next);
    node*front = head->next;
    front->next = head;
    head->next = NULL;
    return newhead;

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
    cout<<"reversed"<<endl;
   node* new_head = reverse(head);
   cout<<new_head->data;
    
}