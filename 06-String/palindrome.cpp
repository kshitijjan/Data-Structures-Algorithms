#include<iostream>
using namespace std;

char uppertolower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}

int str_length(char ch[10]){

    int count = 0;

    for(int i=0; i<10 && ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

bool palindrome(char ch[], int size){
    int start = 0;
    int end = size-1;

    for(int i=0; i<size && start<=end; i++){
        if(uppertolower(ch[start]) != uppertolower(ch[end])){
            return 0;
        }
        else if(uppertolower(ch[start]) == uppertolower(ch[end])){
            return 1;
            start++;
            end--;
        }
    }
}

int main(){

char ch[10];

cout<<"Enter a word"<<endl;
cin>>ch;

cout<<"Your entered word is "<< ch << endl;

int len = str_length(ch);

cout<<"Length of your string is "<< len <<endl;

bool pal = palindrome(ch, len);

if(pal == 1){
    cout<<"Yes Palindrome"<<endl;
}
else{
    cout<<"Not palindrome"<<endl;
}

    return 0;
}