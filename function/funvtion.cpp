#include<iostream>
using namespace std;

void printNum(int a){
    cout<<a<<endl;
    cout<<++a;
}
int sum(int a, int b){
    return a+b;
}
char getGrade(int marks){
    switch(marks/10){
        case 9: return 'A';break;
        case 8: return 'B';break;
        case 7: return 'C';break;
        case 6: return 'D';break;
        default: return 'F'; 
    }
}
int main(){
    // int a=6;
    // printNum(a);
    // cout<<a;
    // int a;
    // int b;
    // cin>>a;
    // cin>>b;
    // int ans= sum(a,b);
    // cout<<ans<<endl;
    // cout<<&ans;

    /////////////////
    int marks;
    cin>>marks;
    char score=getGrade(marks);
    cout<<score<<endl;
    return 0;
}