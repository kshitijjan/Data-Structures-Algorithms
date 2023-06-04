#include<iostream>
using namespace std;

    char uppertolower(char ch){
        if((ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            char temp = ch - 'A' + 'a'; 
            return temp;
        }
        else{
            return ch;
        }
    }
    bool valid(char ch){
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9')){
            return 1;
        }
        return 0;
        
    }
    bool checkpalindrome(string s){
        int start = 0;
        int end = s.length()-1;
        
        for(int i=0; i<s.length() && start<=end; i++){
            if(s[start] != s[end]){
                return 0;
            }
            else if(s[start] == s[end]){
                start++;
                end--;
                
            }
        }
        return 1;
    }

    int main(){
        
        string s;
        cout<<"Enter your string"<<endl;
        getline(cin,s);
        string temp = "";
        for(int i=0; i<s.length(); i++){
            if(valid(s[i])){
                temp.push_back(s[i]);
            }
        }
        
        //Converting to Lower case
        for(int j=0; j<temp.length(); j++){
            temp[j] = uppertolower(temp[j]); 
        }
        
        //Checking plaindrome
        int res = checkpalindrome(temp);

        if(res == 1){
            cout<<"Yes palindrome"<<endl;
        }
        else{
            cout<<"Not Palindrome"<<endl;
        }
    }