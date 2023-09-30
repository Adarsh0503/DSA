#include<iostream>
#include<string.h>
using namespace std;


int main(){

    char ch[100];
    // cin>>ch;
    cin.getline(ch,20);
    int t=strlen(ch);

    // cout<<ch.size();  this doesmt work;
    int count=0;

    for(int i=0;i<100;i++){
        if(ch[i]=='\0'){
            break;
        }else{
            count++;
        }

    }
    cout<<t;


    //function to calculate length;

    cout<<strlen(ch);
}