#include<iostream>
using namespace std;

int main(){

int num = 5;
int *ptr  = &num;

cout<<"Num = " << num<<endl;
cout<<"*ptr = "<< *ptr<<endl;

cout<<"ptr = "<<ptr<<endl;
cout<<"&num = "<<&num<<endl;

cout<<"&ptr = "<<&ptr<<endl;



    return 0;
}