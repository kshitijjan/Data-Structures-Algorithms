#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Link: https://leetcode.com/problems/two-sum/
//Incomplete

int main(){
    

int n, target;
cin>>n >> target;
vector<int> nums;

for(int i=0; i<n; i++){
    cin>>nums[i];
}

for(int i=0; i<n; i++){
    for(int j=1; j<n && j!=i; j++){
        if((nums[i] + nums[j]) == target){
                cout<<i<<" "<<j<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
}

    return 0;
}