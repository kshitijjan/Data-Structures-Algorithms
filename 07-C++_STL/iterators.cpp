#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main(){

/*-------------------------------------------------------------------------------------------------------------------*/
array<int, 5> arr = {1,2,3,4,5};

//Begin will give address of first element and end will give address of right of last element 
cout<<arr.begin()<<endl;
cout<<arr.end()<<endl;

//This will iterate to the entire array from begin to end-1
// for(auto it: arr.begin(); it!=arr.end(); it++){
//     cout<<*it<<" ";
// }cout<<endl;

//This is also a way to iterate to the entire array
for(auto it: arr){
        cout<<it<<" ";
    }cout<<endl;

/*-------------------------------------------------------------------------------------------------------------------*/

//String is basically a combinaton of characters so here c is a character, so the output will be K s h i t i j
string s = "Kshitij";
for(auto c: s){
    cout<< c << " ";
}cout<<endl;

/*-------------------------------------------------------------------------------------------------------------------*/

//Some more functions

cout<<arr.size()<<endl; //Gives size of the array
cout<<s.size()<<endl;   //Gives size of the array

cout<<arr.front()<<endl; //Gives the element present at the 0th index
cout<<arr.at(0)<<endl;   //Alternative of arr.front()

cout<<arr.back()<<endl; //Gives the element present at the last index
cout<<arr.at(arr.size()-1)<<endl; //Alternative of arr.back()

return 0;
}