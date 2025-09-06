// #include<stdio.h>
// #include<stdlib.h>
// #define N 7
// int stack[N];
// int top = -1;


// int isFull(){
//     if (top == N-1){
//         return 1;
//     }
//     return 0;
// };

// int isEmpty(){
//     if(top == -1){
//         return 1;
//     }
//         return 0;
// };
// void pop(){
//    if( isEmpty()){
//         printf("underflow");
//         return;
//     }
//     printf("popped element is %d\n",stack[top]);
//     top--;
// };


// void push(int data){
//    if( isFull()){
//         printf("overflow");
//         return;
//     }

//     top++;
//     stack[top] = data;
// };

// void traverse(){
//     int i;
//     for(i = top;i>=0;i--){
//         printf("%d\t",stack[i]);
//     }
// };

// int main(){
    

//     push(5);
//     push(9);
//     push(7);
//     push(1);
//     push(2);
//     push(8);
//     push(0);
//     printf("elements in stack\n");
//     traverse();
//     printf("\n");
//     pop();
//     pop();
//     traverse();
// }

// #include<stdio.h>
//  #include<stdlib.h>
// #define N 7
// int queue[N];
// int front = -1;
// int rear = -1;


// int isFull(){
//     if (rear == N-1){
//         return 1;
//     }
//     return 0;
// };

//  int isEmpty(){
//     if(front == -1 && rear == -1){
//         return 1;
//      }
//          return 0;
// };
// void dequeue(){
//   if( isEmpty()){
//         printf("underflow");
//        return;
//    }
//    printf("dequed element is %d\n",queue[front]);
//      front++;
//  };


// void enqueue(int data){
//    if( isFull()){
//         printf("overflow");
//          return;
//      }
//  if(front == -1 && rear == -1){
//     front ++;
//     rear++;
//      queue[rear] = data;
//  }
//   else{  rear++;
//     queue[rear] = data;}
//  };

//  void traverse(){
//      int i;
//      for(i = front;i<=rear;i++){
//          printf("%d\t",queue[i]);
//      }
//  };

//  int main(){

//  enqueue(3);
//  enqueue(9);
//  enqueue(8);
//  enqueue(0);
//  enqueue(5);
//  enqueue(1);  
//  enqueue(4); 
//     printf("elements in stack\n");
//    traverse();
//     printf("\n");
//        dequeue();
//        dequeue();

//     traverse();
// }


// stack linked list

// #include<stdio.h>
// #include<stdlib.h>
//  struct node{
//     int data;
//     struct node* next;
//  };
//  struct node *top = NULL;
 
//  void push(int data){
//      struct node* newnode = (struct node*)malloc(sizeof(struct node));
//       newnode->data = data;
//       newnode->next = top;   
//        top = newnode;     
//  }
//   void pop(){

//     if (top == NULL)  
//     { 
//         printf("Error: Stack Underflow\n"); 
//     } 
//      else 
//         { 
//             struct node* temp = top; 
//             printf("\n Pop Data at the top::%d",top->data); 
//             top= temp->next; 
//             free(temp);
//              }  
//            } 

  

//   void traverse(){
//     struct node* temp  = top;
//     printf("Stack elements:\n");
//     while(temp != NULL){
//         printf("%d\t",temp->data);
//         temp = temp->next;
//     }  
//   };

//   int main()  
// { 
//     push(8);
//      push(7);
//       push(6);
//        push(5);
//         push(9);
//         traverse();
//         return 0;  
     
// }
    

#include<stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node* next;
 };
 struct node *front = NULL;
 struct node *rear = NULL;

 void enqueue(int data){
     struct node* newnode = (struct node*)malloc(sizeof(struct node));
      newnode->data = data;
      newnode->next = NULL;   
       if(front == NULL && rear == NULL) {
         front = rear = newnode;
       } 
       else{
        rear->next = newnode;
        rear = newnode;
       }   
 }
  void dequeue(){

    if (front == NULL && rear == NULL)  
    { 
        printf("Error: Stack Underflow\n"); 
    } 
     else 
        { 
            struct node* temp = front; 
            printf("\n dequed Data::%d",front->data); 
            front= temp->next; 
            free(temp);
             }  
           } 

  

  void traverse(){
    struct node* temp  = front;
    printf("queue elements:\n");
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }  
  };

  int main()  
{ 
    enqueue(6);
    enqueue(8);
    enqueue(9);
    enqueue(3);
    enqueue(2);
    traverse();
    dequeue();
    traverse();

        return 0;  
     
}
