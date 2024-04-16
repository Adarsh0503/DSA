#include<iostream>

using namespace std;

// creation of class
class Animal{
    
    private:
    int weight;
    //state or properties  by deafult private

    public :     // makes sit public

    int age;
    string name;



    // behaviours or functions

    void eat(){
        cout<<"Eating "<<endl;
    };


    void sleep(){
cout<<"Sleeping"<<endl;
    };


    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight=w;
    }

};

int main(){

        //cout<<"size of empty class is "<<sizeof(Animal);  // output 1l
        //cout<<"size of class containing int,int,char is "<<sizeof(Animal);  // output 12   
        //reason padding and greedy alignment



        //OBJECT CREATION IN 2 WAYS


        // 2nd Dynamic memory 





    return 0;
}