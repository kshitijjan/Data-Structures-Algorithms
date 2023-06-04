#include<iostream>
using namespace std;

string reverse(string& s, int start, int end){

    if(start>end){
        return s;
    }
    
    swap(s[start], s[end]);
    reverse(s, start+1, end-1);
    
    return s;

}

int main(){

string s;
cin>>s;

//Both the below cout will work

cout<< reverse(s, 0, s.length()-1)<<endl; //This will work bcz we are returning s

cout<<s<<endl; //This will work bcz we didn't made a copy in reverse function instead we passed reference 



    return 0;
}