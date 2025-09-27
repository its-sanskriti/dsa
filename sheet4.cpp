#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head = nullptr;
void display(){
    node *p = head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}
void insertatBeg(int value){
    node * newNode = new node();
    newNode -> data = value;
    newNode -> next = head;
    head = newNode;
}
void middlenode(){
    if(head == nullptr){
        cout<<"list is empty "<<endl;
        return;
    }
    node *fast =head;
    node *slow = fast;
    while(fast != nullptr && fast -> next != nullptr){
        slow = slow -> next;;
        fast = fast -> next -> next;
    }
    cout<<"middle node is : "<< slow -> data <<endl;
}
 
int main(){
    insertatBeg(20);
    insertatBeg(40);
    insertatBeg(60);
    insertatBeg(70);
    insertatBeg(10);
    
    cout<<" linked list :"<<endl;
    display();
    
    middlenode();

}