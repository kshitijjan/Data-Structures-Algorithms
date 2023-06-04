#include<iostream>
using namespace std;

int pow(long int base, int power){

    if(power == 0){
        return 1;
    }
    if(power == 1){
        return base;
    }
    int ans = pow(base, power/2);
    
    if(power%2 == 0){
        return ans*ans;
    }
    return (ans*ans)*base;
}

int main(){

long int base, power;
cin>>base >> power;

int ans = pow(base, power);

cout<<"ans is "<<ans<<endl;

    return 0;
}