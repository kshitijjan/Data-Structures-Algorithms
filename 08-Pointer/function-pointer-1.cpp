#include<iostream>
using namespace std;

void print(int *ptr){

    cout<<*ptr<<endl;
    cout<<ptr<<endl;
}

void update(int *ptr){

    (*ptr)++;
    cout<<*ptr<<endl;
}

int main(){

int num = 5;

int *ptr = &num;

print(ptr);

cout<<ptr<<endl;

update(ptr);

cout<<*ptr<<endl;
cout<<num<<endl;


    return 0;
}