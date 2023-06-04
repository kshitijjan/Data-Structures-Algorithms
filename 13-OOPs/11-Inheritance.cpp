#include<iostream>
using namespace std;

class Human{  //Parent/Base Class

public:
string name;
int age;
int dob;

public:
void getDetails(){
    cin>>name;
    cin>>age;
    cin>>dob;
}

};

class Male: public Human{    //Child/Derived Class
public:

int color;
void print(){
    cout<<"Male Sleeping"<<endl;
}

};

int main(){
Male m1;
m1.getDetails();

cout<<m1.name<<endl;
cout<<m1.age<<endl;
cout<<m1.dob<<endl;
m1.print();


    return 0;
}