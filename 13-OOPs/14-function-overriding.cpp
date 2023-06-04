#include<iostream>
using namespace std;

class A{

public:
void func(){
    cout<<"Inside Class A"<<endl;
}
};

class B: public A{

public:
};

class C: public A{

public:
void func(){
    cout<<"Inside Class C"<<endl;
}
};

int main(){

B objb;
objb.func();

C objc;
objc.func();

    return 0;
}