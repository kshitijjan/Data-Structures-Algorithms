#include<iostream>
using namespace std;

void intersection(int arr[], int brr[], int size){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i] == brr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }
}

int main(){

int size;
cout<<"Enter the size of Array"<<endl;
cin>>size;

int arr[size];
cout<<"Enter each element of first array"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}
int brr[size];
cout<<"Enter each element of second array"<<endl;
for(int i=0; i<size; i++){
    cin>>brr[i];
}

intersection(arr, brr, size);

    return 0;
}