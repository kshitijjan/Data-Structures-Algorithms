#include<iostream>
using namespace std;

void update(int &a){
    a++;
}

int main(){
    
    int i=5;

    cout<<"Before "<<i<<endl;
    update(i);
    cout<<"After "<<i<<endl;

    return 0;
}