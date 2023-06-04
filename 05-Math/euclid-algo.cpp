#include<iostream>
using namespace std;

int gcd(int a, int b){

    if(b>a){
        swap(a, b);
    }

while(a!=0){
    a=a-b;
}
if(a!=0){
    return a;
}

return b;

}

int main(){

int a,b;
cout<<"Enter the value of a and b ";
cin>> a >> b;

cout<<gcd(a,b)<<endl;


    return 0;
}