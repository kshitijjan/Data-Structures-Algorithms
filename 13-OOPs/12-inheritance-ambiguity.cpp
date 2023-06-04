#include<iostream>
using namespace std;

class A{

public:
void print(){
    cout<<"I am Class A"<<endl;
}
};

class B{

public:
void print(){
    cout<<"I am Class B"<<endl;
    }
};

class C: public A, public B{

public:
};

int main(){

C c;
c.A::print();
c.B::print();

return 0;
}