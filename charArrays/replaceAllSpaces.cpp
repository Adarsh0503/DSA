#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char ch[]){
   int n=strlen(ch);
  for(int i=0;i<n;i++){
    if(ch[i]==' '){
        ch[i]='@';
    }
  }
  //easy or what



}
int main(){


    char ch[100];
     cin.getline(ch,20);

    cout<<ch<<endl;;

    replaceSpaces(ch);
    cout<<ch;
}