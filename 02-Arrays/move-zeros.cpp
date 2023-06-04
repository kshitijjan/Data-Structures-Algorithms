#include<iostream>
using namespace std;

void zeros(int arr[], int size){
    int start = 0;
    for(int i=0; i<size; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[start]);
            start++;
        }
    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }cout<<endl;
}

int main(){
    
int arr[] = {3,6,0,1,5,0,2,0,0,0,4,8};
int size = 12;

zeros(arr, size);

    return 0;
}