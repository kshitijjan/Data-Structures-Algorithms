#include<iostream>
using namespace std;

int main(){

int arr[] = {12,45,67,1,23,90};

for(int i=0; i<6; i++){

    for(int j = i+1; j<6; j++){
        if(arr[j] < arr[i]){
            swap(arr[j], arr[i]);
        }
    }
}
for(int i=0; i<6; i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}