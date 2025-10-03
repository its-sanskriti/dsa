#include<iostream>
using namespace std;

struct node
{
    int data;
    node* prev;
    node* next;
};
node* remove_duplicate(node*& head){
    node*temp = head;
    while(temp!= NULL && temp->next!= NULL){
        node* next_node = temp->next;
        while(next_node != NULL && temp->data == next_node->data){
            
                node* duplicate = next_node;
                next_node= next_node->next;
                delete(duplicate);
        }
            temp->next = next_node;
            if(next_node!= NULL) next_node->prev = temp;
            temp = temp->next;
        }
        return head;
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
    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,30);
    insert(head,40);

    display(head);
    node* mewhead = remove_duplicate(head);
    cout<<"new head"<<endl;

    cout<<mewhead->data<<endl;
    cout<<"after removing"<<endl;
    display(head);
    
    
}

