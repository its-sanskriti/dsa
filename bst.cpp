#include<iostream>
using namespace std;
class Node{
public:
int data;
Node*left;
Node*right;
//constructor
Node(int d){
 this->data = d;
 this->left = NULL;
 this->right = NULL;
}
};

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
Node* insertintoBST(Node* root,int d){
    if(root == NULL){
        root = new  Node(d);
        return root;
    }
    if(d > root->data){
        root->right =insertintoBST(root->right,d);
    }
    else{
        root->left =insertintoBST(root->left,d);
    }
    return root;
}
//find min and max value
Node* minValue(Node* root){
    Node* temp = root;
    while(temp->left!= NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxValue(Node* root){
    Node* temp = root;
    while(temp->right!= NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deletefromBST(Node* root,int val){
    //base case
    if(root == NULL){
        return root;
    }
    if(root-> data == val){
        //0 child
        if(root->left == NULL &&  root->right == NULL){
            delete root;
            return NULL;
        }
     //1 child
     //left child hai
     if(root->left != NULL &&  root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child hai
        if(root->left == NULL &&  root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }
//2 child
    if(root->left != NULL && root->right != NULL){
        int mini = minValue(root->right)->data;
        root->data = mini;
        root->right =deletefromBST(root->right,mini);
        return root;
    }


    }

    else if(root->data > val){
        root->left = deletefromBST(root->left,val);
        return root;
    }
    else{
        root->right = deletefromBST(root->right,val);
        return root;
    }

}


void takeinput(Node*&root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertintoBST(root,data);
        cin>>data;
    }
}

int main(){
    Node*root = NULL;
    cout<<"enter data to create bst"<<endl;
    takeinput(root);
     cout<<"printing bst"<<endl;
    inorder(root);
    
    cout<<endl<<"min value is "<<minValue(root) ->data<<endl;

    cout<<"max value is "<<maxValue(root) ->data<<endl;

 root = deletefromBST(root,110);

cout<<"printing bst"<<endl;
    inorder(root);
    
    cout<<endl<<"min value is "<<minValue(root) ->data<<endl;

    cout<<"max value is "<<maxValue(root) ->data<<endl;
    
     
    return 0;
}
