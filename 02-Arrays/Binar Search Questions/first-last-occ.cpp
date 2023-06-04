#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int start = 0, end = size-1;
    int mid = (start/2)+(end/2);
    int ans;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
    mid = (start/2)+(end/2);
    }
    return ans;
}
int lastOcc(int arr[], int size, int key){
    int start = 0, end = size-1;
    int mid = (start/2)+(end/2);
    int ans;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
    mid = (start/2)+(end/2);
    }
    return ans;
}

int main(){

int arr[] = {1,2,3,4,4,4,4,4,4,4,4,5,6,7,8};

cout<<"First occurrence of the element is at index "<<firstOcc(arr, 15, 4)<<endl;
cout<<"Last occurrence of the element is at index "<<lastOcc(arr, 15, 4)<<endl;


    return 0;
}