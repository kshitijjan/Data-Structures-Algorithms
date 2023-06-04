#include<iostream>
using namespace std;

void getSum(int arr[], int size){

    cout<<"Size of array in getSum function " << sizeof(arr) <<endl;
    int sum = 0;

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }

cout<< sum <<endl;

}

int main(){

int arr[5] = {1,2,3,4,5};

cout<< "Size of array in main function  " << sizeof(arr) <<endl;

getSum(arr, 5);
getSum(arr+3, 2);



    return 0;
}