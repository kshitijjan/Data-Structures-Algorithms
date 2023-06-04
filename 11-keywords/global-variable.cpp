#include<iostream>
using namespace std;

int cp = 6;

void a(){
    cout<< cp <<endl;
}

void b(){
    cout<< cp <<endl;
}

int main(){

    a();
    b();
    cout<< cp <<endl;

    return 0;
}