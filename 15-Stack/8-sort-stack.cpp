#include<iostream>
#include<stack>
using namespace std;

void sortedInsert(stack<int> &s, int num){

    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();

    sortedInsert(s, num);

    s.push(n);
}

void sortStack(stack<int> &s){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();

    sortStack(s);
    
    sortedInsert(s, num);
}

int main(){

stack<int> s;
int num;

for(int i=0; i<5; i++){
    cin>>num;
    s.push(num);
}

sortStack(s);

cout<<s.top()<<" ";
s.pop();
cout<<s.top()<<" ";
s.pop();
cout<<s.top()<<" ";
s.pop();
cout<<s.top()<<" ";
s.pop();
cout<<s.top()<<" ";
s.pop();
    
    return 0;
}