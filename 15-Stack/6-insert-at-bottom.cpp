#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s, int x){


    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    pushAtBottom(s, x);
    s.push(num);
}

int main(){

stack<int> s;
s.push(5);
s.push(4);
s.push(3);
s.push(2);
s.push(1);
int x = 12;

pushAtBottom(s, x);

cout<<s.top()<<endl;
s.pop();
s.pop();
s.pop();
s.pop();
s.pop();
cout<<s.top()<<endl;




    return 0;
}