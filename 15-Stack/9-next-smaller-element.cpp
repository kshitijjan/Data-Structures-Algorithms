#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void smallerElement(vector<int> &arr, int size){

stack<int> s;
s.push(-1);
vector<int> ans(size);

for(int i=size-1; i>=0; i--){
    int curr = arr[i];
    while(s.top() >= curr){
        s.pop();
    }
    ans[i] = s.top();
    s.push(curr);
}
for(int i=0; i<size; i++){
    cout<<ans[i]<<" ";
}
}

int main(){

vector<int> arr;

for(int i=0; i<5; i++){
    cin>>arr[i];
}
smallerElement(arr, 5);

    return 0;
}