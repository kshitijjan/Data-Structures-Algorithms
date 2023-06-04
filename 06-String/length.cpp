#include<iostream>
using namespace std;

int getlength(char name[10]){
    
    int count = 0;

    for(int i=0; i<10 && name[i] != '\0'; i++){
        count++;
    }

    return count;
}

int main(){

char name[10];

cout<<"Enter your name "<<endl;
cin>>name;

cout<<"Your name is "<<name<<endl;

int len = getlength(name);

cout<<"Length of string is "<<len<<endl;

    return 0;
}