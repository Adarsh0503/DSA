#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};

int heightofTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int left=heightofTree(root->left);
    int right= heightofTree(root->right);

    return max(left,right)+1;

}
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
bool isIdentical(Node* root1, Node* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }
    else if(root1==NULL && root2!=NULL){
        return false;
    }
    else if(root1!=NULL && root2==NULL){
        return false;
    }
    else if(root1->data!=root2->data){
        return false;

    }else{
        isIdentical(root1->left,root2->left);
        isIdentical(root1->right,root2->right);
    }
    
   
}

int main(){
    Node* root1=NULL;
    root1= buildTree();
    Node* root2=NULL;
    root2= buildTree();
    // cout<<"Height off tree is : "<<endl;

    int h= heightofTree(root1);
    cout<<h<<endl;
    int h2= heightofTree(root2);
    cout<<h2<<endl;

    bool isvalid= isIdentical(root1, root2);

    cout<<" Chcecking for identicL TREE "<<endl;
    cout<<isvalid<<endl;
}