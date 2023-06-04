#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//We can create our own namespace
namespace kshitij{
    int val = 5;
    int getval(){
        return val*10;
    }
};

int main(){

cout<<kshitij::getval()<<endl;
}