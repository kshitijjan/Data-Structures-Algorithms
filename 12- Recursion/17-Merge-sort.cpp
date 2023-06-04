#include<iostream>
using namespace std;

void merge(int *arr, int start, int end){

    //Finding middle element
    int mid = (start+end)/2;

    //Finding Length of both the splitted arrays
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //Creating array using both the lengths
    int *a = new int[len1];
    int *b = new int[len2];

    //Copying values 
    int indexOfMainArray = start;
    //from arr to a, from start to mid
    for(int i=0; i<len1; i++){
        a[i] = arr[indexOfMainArray];
        indexOfMainArray++;
    }
    //from arr to b, from mid+1 to end
    indexOfMainArray = mid+1;
    for(int i=0; i<len2; i++){
        b[i] = arr[indexOfMainArray];
        indexOfMainArray++;
    }


    //Merging both the arrays
    int index1 = 0, index2 = 0;
    indexOfMainArray = start;
    while(index1<len1 && index2<len2){
        if(a[index1] < b[index2]){
        arr[indexOfMainArray] = a[index1];
        indexOfMainArray++;
        index1++;
        }
        else{
            arr[indexOfMainArray] = b[index2];
            index2++;
            indexOfMainArray++;
        }
    }
    while(index1<len1){
        arr[indexOfMainArray] = a[index1];
        index1++;
        indexOfMainArray++;
    }
    while(index2<len2){
        arr[indexOfMainArray] = b[index2];
        index2++;
        indexOfMainArray++;
    }
    
    //Deleting Array
    delete []a;
    delete []b;

}

void mergeSort(int *arr, int start, int end, int size){

    int mid = (start+end)/2;

    if(size == 0 || size == 1){
        return;
    }
    if(start>=end){
        return;
    }
    else{
        //Sort left side
        mergeSort(arr, start, mid, size);

        //Sort right side
        mergeSort(arr, mid+1, end, size);
        merge(arr, start, end);
    }
    
}

int main(){

int arr[] = {12,56,34,90,23,67};
int size = 6;

mergeSort(arr, 0, size-1, size);

for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}