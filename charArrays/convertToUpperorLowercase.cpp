#include<iostream>
#include<string.h>
using namespace std;
void convert(char ch[]){
    int n=strlen(ch);
    for(int i=0;i<n;i++){
        ch[i]=ch[i]-'a'+'A';

    }

}

void converttoLower(char ch[]){
    int n=strlen(ch);
    for(int i=0;i<n;i++){
        ch[i]=ch[i]+32;

    }

}
int main(){
    char ch[100];

    cin.getline(ch,100);
    converttoLower(ch);
    for(int i=0;i<strlen(ch);i++){
    cout<<ch[i];
    }

}