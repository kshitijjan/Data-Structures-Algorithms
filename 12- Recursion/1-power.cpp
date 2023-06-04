#include<iostream>
using namespace std;

int power(int n){

    if(n == 0){
        return 1;
    }
    int smaller = power(n-1);
    int bigger = 2 * smaller;
    return bigger;
}

int pow(int n){

    if(n==0){
        return 1;
    }
    return 2 * pow(n-1);
}

int main(){

int n;
cin>> n;

cout<< power(n) <<endl;
cout<< pow(n) <<endl;

    return 0;
}