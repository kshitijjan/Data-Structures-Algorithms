#include<iostream>
#include<stack>
using namespace std;


bool validParanthesis(string expression){

stack<char> s;

    for(int i=0; i<expression.length(); i++){
        char ch = expression[i];

        if(ch == '(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top = s.top();

                if((ch == ')' && top == '(') || 
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')){
                        s.pop();
                    }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}


int main(){

string expression = "{([])}";
bool ans = validParanthesis(expression);
if(ans){
    cout<<"Yes"<<endl;
}
else{
    cout<<"NO"<<endl;
}


    return 0;
}