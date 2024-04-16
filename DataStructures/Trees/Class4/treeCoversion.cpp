#include<iostream>
#include<queue>
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
    cout<<"Enter the data"<<endl;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* newNode= new Node(data);

    cout<<"Enter the left data"<<endl;
    newNode->left= buildTree();

    cout<<"Enter the right data"<<endl;
    newNode->right= buildTree();

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
int position(int inorder[], int size, int element){
    for (int i = 0; i < size; i++){
        if(inorder[i]==element){
            return i;
        }
           
    }
             return -1;
}
    
    


Node* inorderpostordertoTree( int inorder[],int preorder[], int size, int& preindex, int inorderstart, int inorderend ){
    
    // base case
    if(preindex>=size || inorderstart> inorderend)  {
        return NULL;
    }  

    // step A
    int element= preorder[preindex];
    preindex++;

    // step b  iska root bnaoa
    Node* root= new Node(element);


    int pos= position(inorder,size, element);



// step C
    root->left=inorderpostordertoTree(inorder,preorder,size,preindex,inorderstart, pos-1);


// Step D
root->right=inorderpostordertoTree(inorder,preorder,size,preindex,pos+1,inorderend);



return root;


}

int main(){
        int inorder[]={3,1,4,5,2};
        int preorder[]= {5,1,3,4,2};
        int size=5;
        int preindex=0;
        int inorderstart=0;
        int inorderend=size-1;

        Node* root= inorderpostordertoTree(inorder,preorder,size, preindex, inorderstart, inorderend);

        cout<<"printing"<<endl;
        levelOrderTraversal(root);
        

        


}