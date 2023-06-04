#include<iostream>
using namespace std;

bool palindrome(string s, int start, int end){

    if(start>end){
        return true;
    }
    if(s[start] == s[end]){
        palindrome(s, start+1, end-1);

        return true;
    }
    return false;
    
}

int main(){

string s;
cin>>s;

int ans = palindrome(s, 0, s.length()-1);

(ans == 1) ? cout<<"Yes Palindrome"<<endl : cout<<"No plaindrome"<<endl;


    return 0;
}