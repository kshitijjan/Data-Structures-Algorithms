#include<iostream>
using namespace std;

void insertionSort(int *arr, int size){

    if(size == 0 || size == 1){
        return ;
    }
    else{
        for(int i=0; i<size; i++){

        
        if(arr[i]<arr[i-1]){
            swap(arr[i], arr[i-1]);
        }
        insertionSort(arr, size-1);
        }
    }
    
}

int main(){

int size;
cin>>size;
int arr[] = {54, 23, 89, 56, 12, 15};

insertionSort(arr, size);

for(int i=0; i<size; i++){
    cout<<arr[i]<< " ";
}cout<<endl;

    return 0;
}