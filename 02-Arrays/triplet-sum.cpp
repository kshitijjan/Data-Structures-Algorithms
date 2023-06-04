#include<iostream>
using namespace std;

void tripletpairSum(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        for(int j=0; j != i; j++){
            for(int k=0; k != i && k != j; k++){
            if(arr[i] + arr[j] + arr[k] == key){
                cout<<arr[i]<< " " << arr[j]<< " "<< arr[k] <<endl;
            }
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
int key;
cout<<"Enter the sum of Array"<<endl;
cin>>key;

tripletpairSum(arr, size, key);

    return 0;
}