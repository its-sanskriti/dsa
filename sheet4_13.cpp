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
    temp->next =newnode;
}


//tc of 0(n/2) tortoise and hare 
    node*middle(node*head){
    node* slow = head;
    node* fast = head;
    ///fast!= null for even no of length
    //fast->next!= null for odd no of length
    while(fast!= NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
   }

   void middle_2(node* head){
    node*temp = head;
    int count=0;
    while(temp!= NULL){
        count++;
        temp = temp->next;
    }
    int middle = (count/2)+1;
    node*temp1 = head;
    while(temp1!= NULL){
        middle--;
        if(middle == 0){
            cout<<"middle is "<<temp1->data;
        }
        temp1 = temp1->next;
    }
}
void display(node* head){
    node*temp = head;
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
    insert(head,40);
    insert(head,50);
    insert(head,60);
    display(head);
    node*ans = middle(head);
    cout<<"middle element is "<<ans->data;
    // middle_2(head);
    return 0;
}