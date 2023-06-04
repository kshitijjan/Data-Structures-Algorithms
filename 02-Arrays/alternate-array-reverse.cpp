#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0;
    int end = 1;

    for(int i=0; i<size; i++){
        swap(arr[start], arr[end]);
        start+=2;
        end+=2;
        
        if(end>=size){
            break;
        }
    }
    for(int i=0; i<size; i++){
    cout<<arr[i] << " ";
    }
    cout<<endl;
}


int main(){

int size;
cout<<"Enter the size of Array"<<endl;
cin>>size;

int arr[size];
cout<<"Enter each element of array"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}

reverseArray(arr, size);


    return 0;
}