#include<iostream>
#include<stack>
using namespace std;

void insertBottom(stack<int> &s, int element){

    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();

    insertBottom(s, element);
    s.push(num);
}

void reverseStack(stack<int> &s){

    if(s.empty()){
        return;
    }

    int num = s.top();
    s.pop();

    reverseStack(s);

    insertBottom(s, num);
}

int main(){

stack<int> s;
int num;
for(int i=0; i<5; i++){
    cin>>num;
    s.push(num);
}
cout<<"Pervious Top "<<s.top()<<endl;
reverseStack(s); 
cout<<"New Top "<<s.top()<<endl;

    return 0;
}