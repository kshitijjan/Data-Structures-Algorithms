#include<iostream>
using namespace std;

int partition(int *arr, int start, int end){

int count = 0;

//Taking pivot as first element
int pivot = arr[start];

//Counting number of element less than pivot
for(int i=start+1; i<=end; i++){
    if(arr[i]<=pivot){
        count++;
    }
}

//Getting the final pivot index and placing the pivot element at right place
int pivotIndex = start+count;
swap(arr[start], arr[pivotIndex]);

//Placing elements less than pivot at pivot-1 part and greater than pivot at pivot+1 part, sorting here
int i = start, j = end;

while(i<pivotIndex && j>pivotIndex){

    while(arr[i]<pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<pivotIndex && j>pivotIndex){
        swap(arr[i++], arr[j--]);
    }
}
return pivotIndex;
}

void quickSort(int *arr, int start, int end){

    //Base Case
    if(start>=end){
        return ;
    }

    //Finding index of pivot element
    int pivot = partition(arr, start, end);

    //Sorting pivot-1 part
    quickSort(arr, start, pivot-1);
    //Sprting pivot+1 part
    quickSort(arr, pivot+1, end);
    
}

int main(){

int arr[] = {45,12,89,3,56,78,90,23,67,1};
int size = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, size-1);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    
    return 0;
}