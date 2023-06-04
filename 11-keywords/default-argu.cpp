#include<iostream>
#include<vector>
using namespace std;

void printArray(int arr[] , int size, int start = 0){

    for(int i=start; i<size; i++){
        cout<<arr[i]<< " ";
    }
}

int main(){

int arr[] = {1,2,3,4,5,6};

printArray(arr, 6);

    return 0;
}