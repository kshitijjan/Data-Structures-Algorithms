#include<iostream>
using namespace std;

//The following two functions are for to find factorial of a no.

int factorial(int n){

    if(n == 0){
        return 1;
    }
    int smaller = factorial(n-1);
    int bigger = n * smaller;
    return bigger;
}

int fact(int n){

    if(n==0){
        return 1;
    }
    return n * fact(n-1);
}

int main(){

int n;
cin>>n;

cout<<factorial(n)<<endl;

cout<<fact(n)<<endl;


    return 0;
}