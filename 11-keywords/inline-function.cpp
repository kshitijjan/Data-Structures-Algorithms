#include<iostream>
using namespace std;

inline int getMax(int& a, int& b){

    return (a>b) ? a : b;
}

int main(){

int a = 5, b = 6;

int ans = getMax(a, b);  //getMax function call will be replaced by function body

cout<< ans <<endl;

    return 0;
}