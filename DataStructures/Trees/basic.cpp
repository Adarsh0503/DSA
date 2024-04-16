#include<iostream>
#include<queue>
using namespace std;


// Building tree
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
    // recursive function
    int data;
    cout<<"Enter the data ";
    cin>>data;
    // base case
    if(data==-1){
        return NULL;
    }   
    // step 1
    Node* newNode= new Node(data);
    // STEP2
    cout<<"Enter data for left node "<<endl;
    newNode->left=buildTree();
    // step3
    cout<<"enter data for right part "<<endl;
    newNode->right=buildTree();

    return newNode;


}

void levelOrderTraversal(Node* root){
    queue<Node*>q;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        //a
        Node* temp= q.front();
        //b
        q.pop();

        //c
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
        cout<<temp->data<< " ";
        
        if(temp->left)
        {
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }

    }
}

void inorderTraversal(Node* root){
    // base case
    if(root==NULL){
        return;

    }
    // inorder
    inorderTraversal(root->left);
    
    cout<<root->data<<" ";

    inorderTraversal(root->right);
}
void preorderTraversal(Node* root){
    // base case
    if(root==NULL){
        return;

    }

    // preorder

    cout<<root->data<<" ";
    preorderTraversal(root->left);
    
    

    preorderTraversal(root->right);
}
void postorderTraversal(Node* root){
    // base case
    if(root==NULL){
        return;

    }

    // postorder
    postorderTraversal(root->left);
    
  

    postorderTraversal(root->right);
    cout<<root->data<<" ";
}


int maxheight(Node* root){

    if(root==NULL){
        return 0;

    }
    int leftheight=maxheight(root->left);
    int rightheight=maxheight(root->right);

    int ans = max(leftheight,rightheight)+1;


    return ans;
}

int diameterofTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int left=maxheight(root->left);
    int right=maxheight(root->right);
    

    int maxleft=diameterofTree(root->left);
    int maxright=diameterofTree(root->right);
    int rootIncluded=left+right;
    int ans=max(maxleft,max(maxright,rootIncluded));

    return ans;
}


int main(){

    Node* root=NULL;
    root= buildTree();


    levelOrderTraversal(root);

    cout<<"Printing Inorder "<<endl;
    inorderTraversal(root);


    cout<<"Printing preorder "<<endl;
    preorderTraversal(root);


    cout<<"Printing postorder "<<endl;
    postorderTraversal(root);

    cout<<"Printing the max height"<<endl;
    cout<<maxheight(root);

    cout<<endl;
    cout<<"printing diameter of tree"<<endl;
    cout<<diameterofTree(root)<<endl;
    

}
