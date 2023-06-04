#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = (start/2) + (end/2);
    while(start<end){
    if(arr[mid]>=arr[0]){
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

int arr[8] = {9,17,23,45,11,2,1,5};
cout<<"The pivot element is "<<pivot(arr, 8);

    return 0;
}