#include<iostream>
using namespace std;

void duplicateElement(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size && j != i; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<endl;
            }
        }

    }
}


int main(){

int size;
cout<<"Enter the size of array"<<endl;
cin>>size;

int arr[size];
cout<<"Enter each element of array"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}

duplicateElement(arr, size);

    return 0;
}