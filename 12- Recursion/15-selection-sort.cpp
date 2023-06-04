#include<iostream>
using namespace std;

void selectionSort(int *arr, int size, int i, int j){

    if(size == 0 || size == 1){
        return ;
    }
    else{
        for(int k = 0; k<size; k++){

        if(arr[i]>arr[j]){
            swap(arr[i], arr[j]);   
            selectionSort(arr, size-1, i, j+1);
        }
        else{
            selectionSort(arr, size-1, i+1, j+1);
        }
        }
    }
}
int main(){

int n;
cin>>n;
int arr[] = {54, 23, 89, 56, 12, 15};

selectionSort(arr, n, 0, 1);

for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}