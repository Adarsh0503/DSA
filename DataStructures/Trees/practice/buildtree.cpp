#include<iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

};

Node* buildTree(){
    int data;
    cout<<"Enter the data "<<endl;
    cin>>data;


    // base case
    if(data==-1){
        return NULL;
    }
    
    //STEP A
    Node* root = new Node(data);
    

    cout << "Enter data for left part of " << data << " node" << endl;
    // STEP B
    root->left = buildTree();

    cout << "Enter data for right part of " << data << " node" << endl;

    // STEP C
    root->right = buildTree();


    return root;


}

void inOrder(Node* root){

}






void inorder(Node* root){
    if(root==NULL){
        return ;
    }

    //LNR

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    // NLR

    cout<<root->data<<" ";

    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node* root){
    if(root==NULL){
        return;
    }

// LRN
    postOrder(root->left);
    postOrder(root->right);

     cout<<root->data<<" ";
}

int height(Node* root){


    if(root==NULL){
        return 0;
    }


   int leftHeight= height(root->left);
   int rightHeight= height(root->right);

   int height= max(leftHeight, rightHeight);

   return height+1;

    
}

int diameterOftree(Node* root){
    if(root==NULL){
        return 0;
    }
    

    int leftHeight= height(root->left);
    int rightHeight= height(root->right);

    int left= diameterOftree(root->left);
    int right= diameterOftree(root->right);

    int included= left+right;

    int ans= max(included,max(leftHeight, rightHeight));

    return ans;



}
int main(){
    Node* root= NULL;

    root=buildTree();
    // levelOrder(root);
    cout<<"Inorder traversal "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"Preorder traversal "<<endl;
    preOrder(root);
    cout<<endl;
    cout<<"Postorder traversal "<<endl;
    postOrder(root);
    cout<<endl;

    int hei= height(root);
    cout<<"The height of tree is :" <<hei<<endl;



}



