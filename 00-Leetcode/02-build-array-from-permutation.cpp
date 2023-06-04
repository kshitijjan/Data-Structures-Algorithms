#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {

public:
    vector<int> buildArray(vector<int>& nums) {
            
        vector<int> ans(nums.size());
        
        for(int i=0; i<nums.size(); i++){
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
    
};

int main(){

int size;
cin>>size;
int n;
vector<int> arr;

for(int i=0; i<size; i++){
    cin>>n;
    arr.push_back(n);
}

Solution s;
s.buildArray(arr);

}

