#include<iostream>
using namespace std;

void printArray(int *arr, int start, int end){

    for(int i=start; i<=end; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

bool binarySearch(int *arr, int start, int end, int key){
    cout<<endl;
    printArray(arr, start, end);
    
    if(start>end){
        return false;
    }

    int mid = start + (end-start)/2;
    cout<<"Value of mid is " << arr[mid]<<endl;

    if(arr[mid] == key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr, mid+1, end, key);
    }
    else{
        return binarySearch(arr, start, mid-1, key);
    }
}


int main(){

int n, key;
cin>>n;
int *arr = new int [n];

for(int i=0; i<n; i++){
    cin>>arr[i];
}
cin>>key;
bool ans = binarySearch(arr, 0, n-1, key);

(ans == true) ? cout<<"yes present"<<endl : cout<<"Not present"<<endl;

delete [] arr;


    return 0;
}