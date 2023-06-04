#include<iostream>
using namespace std;


int str_length(char ch[10]){

    int count = 0;

    for(int i=0; i<10 && ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse_string(char ch[], int size){

    int start = 0;
    int end = size-1;

    for(int i=0; i<size && start<=end; i++){
        swap(ch[start], ch[end]);
        start++;
        end--;
    }
    cout<<"String after reverse is "<<ch<<endl;
}


int main(){
    
char ch[10];

cout<<"Enter a word"<<endl;
cin>>ch;

cout<<"Your entered word is "<< ch << endl;

int len = str_length(ch);

cout<<"Length of your string is "<< len <<endl;

reverse_string(ch, len);

    return 0;
}