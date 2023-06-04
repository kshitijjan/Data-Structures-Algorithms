#include<iostream>
using namespace std;

int main(){

    int i=5;
    int &j = i;

    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
}