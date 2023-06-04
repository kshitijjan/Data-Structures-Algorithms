#include<iostream>
using namespace std;

//This program will give all the prime numbers will is less than the input number

bool isPrime(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){

int num;
cout<<"Enter the number"<<endl;
cin>>num;

for(int i=2; i<num; i++){

    if(isPrime(i) == true){
        cout<<i<<endl;
    }
    
}
    return 0;
}