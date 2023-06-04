#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key){
    int start=0;
    int end = size-1;
    int mid;
    for(int i=0; start<=end && i<size; i++){
        mid = (start/2)+(end/2);
        if(arr[mid]<key){
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        if(key==arr[mid]){
        return 1;
    }
    }
    return 0;
}

int main(){

int size = 8;

int arr[] = {12,23,34,45,56,67,78,89};
int key;
cout<<"Enter the element you want to search for"<<endl;
cin>>key;

bool index = binary_search(arr, size, key);
if(index==1){
    cout<<"The key is present "<<endl;
}
else{
    cout<<"The key is not present"<<endl;
}

    return 0;
} 