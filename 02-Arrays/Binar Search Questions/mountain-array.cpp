#include<iostream>
using namespace std;

int mountain(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = (start/2) + (end/2);
    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    mid = (start/2) + (end/2);
    }
    return start;
}

int main(){

int arr[] = {1,2,3,9,8,7,6,5};

int ans = mountain(arr, 8);
cout<<"The max element is present at index "<<ans<<endl;
    return 0;
}