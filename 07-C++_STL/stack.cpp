#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;


int main(){

//This is a last in first out data structure, this means that whatever goes inside at last will come out at first

stack<int> st;
//Some function in stack:
// pop
// top
// size
// empty
// push or emplace

st.push(2);
st.push(4);
st.push(7);
st.push(1);

cout<<st.top()<<endl;   //Prints 1
st.pop();               //Deletes 1
cout<<st.top()<<endl;   //Prints 7
st.pop();               //Deletes 7
cout<<st.top()<<endl;   //Prints 4
st.pop();               //Deletes 4
cout<<st.top()<<endl;   //Prints 2

/*-------------------------------------------------------------------------------------------------------------------*/

cout<< st.size() <<endl;

/*-------------------------------------------------------------------------------------------------------------------*/

bool flag = st.empty();  //Returns true if stack is empty, or flase

while(!st.empty()){   //Deletes the entire stack
    st.pop();
}
cout<<st.top()<<endl;


stack<int> stt;
cout<<stt.top()<<endl;  //This will throw an error because the stack is empty

//So one check to always remember is to have if statement so that we does not get any error, and this is important in Competetive Programming
//If the stack is empty and we are asking for the top element it will give Run time Error, so always use if statement, it is a thumb rule in CP 
if(!st.empty()){
    cout<<stt.top()<<endl;
}


    return 0;
}