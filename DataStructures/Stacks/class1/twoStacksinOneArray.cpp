#include<iostream>

using namespace std;
// brute force 
// if half half me baatenge to memeory wastage bhut hota hai


// method 2
// top1=-1 and top2=size;
// if (top2-top1==1) no space available

class Stack{

    public:
    int* arr;
    int size;
    int top1;
    int top2;


    Stack(int size){
        arr= new int [size];
        this->size=size;
        top1=-1;
        top2=size;
    }

    void push1(int data){
        if(top2-top1==1){
            // stack is full
            cout<<"Stack1 overflow"<<endl;
        }else{
            top1++;
            arr[top1]=data;
        }

    }

    void pop1(){
        if(top1==-1){
            cout<<"Stack1 underflow"<<endl;
        }else{
            top1--;
        }

    }

    void push2(int data){

        if(top2-top1==1){
            // stack full
            cout<<"Stack2 Overflow"<<endl;
        }else{
            top2--;
            arr[top2]=data;
        }

    }

    void pop2(){
    if(top2==size){
        cout<<"Stack2 underflow"<<endl;
    }else{
        top2++;
    }
    }

    void print() {
    cout<<endl;
    cout<<"top1 : "<<top1<<endl;
    cout<<"top2 : "<<top2<<endl;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
};
int main(){
    Stack s(10);
    s.push1(1);
    s.print();
    s.push1(2);
    s.print();
    s.push1(3);
    s.print();
    s.push1(4);
    s.print();
    s.push1(5);
    s.print();
    
    
    s.push2(10);
    s.print();
    s.push2(9);
    s.print();
    s.push2(8);
    s.print();
    s.push2(7);
    s.print();
    s.push2(6);
    s.print();


}