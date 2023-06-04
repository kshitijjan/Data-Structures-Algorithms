#include<iostream>  
using namespace std;

int main(){

string str;

cout<<"Enter a string: ";
getline(cin, str);

string foundString;
getline(cin, foundString);

cout <<"Position of word "<<foundString<<" is ";  
cout<< str.find(foundString);  

return 0;   
}  