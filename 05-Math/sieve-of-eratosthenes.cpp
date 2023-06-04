#include<iostream>
#include<vector>
using namespace std;

int main(){

int num, count=0;
cout<<"Enter a number ";
cin>>num;

vector<bool> prime(num, true);
prime[0] = prime[1] = false;

for(int i=2; i<num; i++){
    if(prime[i]){
        count++;
        cout<<i<< " ";
    }
    for(int j=2*i; j<num; j=j+i){
        prime[j] = 0;
    }
}
cout<<endl;

cout<<count<<endl;


    return 0;
}