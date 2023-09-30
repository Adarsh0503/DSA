#include<iostream>
#include<string.h>
using namespace std;

// 2 pointer approach
void reverseString(char ch[]){
    int s=0;
    int e= strlen(ch)-1;
    // while(s<=e){
    //     swap(ch[s],ch[e]);
    //     s++;
    //     e--;
    // }

    //doing smae with for loop

    for( ; s<=e; ){
        swap(ch[s],ch[e]);
        s++;
        e--;

    }
}

int main(){
    char ch[100];

    cin.getline(ch,20);

    cout<<ch<<endl;;

    reverseString(ch);
    cout<<"after reversing the string : "<<ch;
}

