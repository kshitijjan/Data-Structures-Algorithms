#include<iostream>
using namespace std;

class A{

public:
void print(){
    cout<<"My name is Kshitij Jain"<<endl;
}

void print(string name){
    cout<<"My name is "<<name<<endl;
}
void print(char name[]){
    cout<<"My name is "<<name<<endl;
}
};

int main(){

A obj;
obj.print();
obj.print("Kshitij");
obj.print("kshitij Jain");




    return 0;
}