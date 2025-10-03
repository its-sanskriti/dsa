#include<iostream>
using namespace std;

struct node{
   int data;
   node*next;
};

void insert(nide*& head, int data){
    node* newnode = new node();
    newode->data = data;
    newnode->next = head;

    if(head = NULL){
        head = newnode;
    }

    node*temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = head;

}

void display(node* head){
   do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}
 
 void split(node* head, node*& head1, node*& head2) {
    node*slow = head;
    node*fast = head;

    while(fast->next != head && fast->next->next != head){
        slow = slow->next;
        fast = fast->next->next;
    }
    node*head1 = head;
    node* head2 = slow->next;

  fast->next = head2;
  slow->next = head1;
}

int main(){
    node* head = NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    display(head);
    node* head1 = NULL;
   node* head2 = NULL;
split(head, head1, head2);

    return 0;
}