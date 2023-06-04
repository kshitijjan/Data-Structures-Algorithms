#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;


int main(){

    //Initilising array in STL
    array<int, 5> arr = {1,2,3,4,5};

    for(auto it = arr.begin(); it!= arr.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;


    //Filling array with a single element at one go
    array<int, 5> a;
    a.fill(6);
    for(int i=0; i<a.size(); i++){
        cout<<a.at(i)<< " ";
    }cout<<endl;

    //If only one value is given then all other values will become 0 and if nothing is given then array will be filled with garbage value
    array<int, 5> b = {1};
    for(int i=0; i<b.size(); i++){
        cout<<b.at(i)<< " ";
    }cout<<endl;



    return 0;
}