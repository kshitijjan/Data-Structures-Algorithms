#include<iostream>
using namespace std;

int main(){

int num = 5;

//pointer is not used while initilising 
int a = num;
cout<< "a before "<<num<<endl;
a++;
cout<< "a after "<<num<<endl;


//pointer is used while initilising
int *ptr = &num;
cout<< "ptr before "<< num <<endl;
(*ptr)++;
cout<<"ptr after "<< num <<endl;


//copying a pointer to another pointer
int *q = ptr;
cout << ptr << " - " << q <<endl;
cout << *ptr << " - " <<*q <<endl;

    return 0;
}