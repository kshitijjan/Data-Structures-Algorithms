#include<iostream>
using namespace std;

void insertion_sort(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] < arr[j]){
                swap(arr[i] , arr[j]);
            }

        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}

int main(){

int arr[] = {12,45,67,1,23,90};

insertion_sort(arr, 6);


    return 0;
}