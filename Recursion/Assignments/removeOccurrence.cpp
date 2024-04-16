#include<iostream>
using namespace std;



void remoOccur(string &s, string &part){
    
    int pos=s.find(part);
    cout<<pos<<endl;


    if(pos != string::npos){
        string leftpart=s.substr(0,pos);
        string rightpart=s.substr(pos+part.length(),s.length());

        s=leftpart+rightpart;

        remoOccur(s,part);
    }
    else{
        return ;
    }
}

 string removeOccurence(string &s, string &part){
    remoOccur(s,part);

    return s;
 }


int main(){

string s = "daabcbaabcbc";
string part = "abc";
cout<<"hi"<<endl;
string answer=removeOccurence(s,part);

cout<<answer<<endl;

}