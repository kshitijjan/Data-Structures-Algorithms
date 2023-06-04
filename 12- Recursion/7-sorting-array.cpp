#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    bool ans;
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
     ans = isSorted(arr+1, size-1);
    }
    return ans;
}

int main(){

int n;
cin>>n;

int *arr = new int [n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}
int ans = isSorted(arr, n);

(ans == true) ? cout<<"Sorted" : cout<<"No Sorted";

delete []arr;

    return 0;
}