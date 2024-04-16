// sequence of character
// collection of character
// its a datatype

// string vs character 
//here in string also null character comes to end but we cant access it
//char array is [b,a,\0,b,b,a,\0,r]  -> output will be  rt0→@T 
//string is  [b,a,\0,b,b,a,\0,r]   -> output will be   r amé∞t


#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    getline(cin,str);
    // str[0]='B';
    // str[0]='a';
    // str[0]='\0';
    // str[0]='b';
    // str[0]='b';
    // str[0]='a';
    // str[0]='\0';
    // str[0]='r';
    // for(int i=0;i<8;i++){
    // cout<<str[i];
    // }

//     cout<<endl;
//     cout<<endl;
// char str[10];
//      str[0]='B';
//     str[0]='a';
//     str[0]='\0';
//     str[0]='b';
//     str[0]='b';
//     str[0]='a';
//     str[0]='\0';
//     str[0]='r';
//     for(int i=0;i<8;i++){
//     cout<<str[i];
//     }

// functions of str

// cout<<"length of string is "<<str.length()<<endl;;
// cout<<str.empty()<<endl;
// str.push_back('A');
// cout<<str<<endl;
// str.pop_back();
// cout<<str<<endl;

// most important function instring
// substr(start_index, total length of substr);
// cout<<str.substr(0,2)<<endl;


// compare function   ->>> syntax = str1.compare(str2)

// if its =0 bothstring exactly is_same
// else  both are differnet

// string str2="adarsh";

// if(str.compare(str2)==0){
//     cout<<"barabar hai";
// }else{
//     cout<<"alag hai";
// }
    


    //find function

// string target="gau";

// cout<<str.find(target);


//replace function

// string str2= "adarsh";
// str.replace(0,4,str2);
// cout<<str;

// erase function  -> syntax is str3.erase(starting index, total no of words to be deleted);

string str3="my name is adarsh";
str3.erase(3,6);
cout<<str3;
    



}