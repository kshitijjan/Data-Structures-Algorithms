#include<iostream>
using namespace std;

int factorial(int n){

    if(n == 0){
        return 1;
    }
    int smaller = factorial(n-1);
    int bigger = n * smaller;
    return bigger;
}

int main(){

int n;
cin>>n;

cout<<factorial(n)<<endl;


    return 0;
}