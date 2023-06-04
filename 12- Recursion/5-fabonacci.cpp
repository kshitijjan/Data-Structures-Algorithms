#include<iostream>
using namespace std;

int fabonacci(int n){

    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int ans = fabonacci(n-1) + fabonacci(n-2);

    return ans;
}

int main(){

int n = 144;
cout<<fabonacci(n)<<endl;

    return 0;
}