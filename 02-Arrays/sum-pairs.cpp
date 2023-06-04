#include<iostream>
using namespace std;


void pairSum(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        for(int j=0; j != i; j++){
            if(arr[i] + arr[j] == key){
                cout<<arr[i]<< " " << arr[j] <<endl;
            }
        }
        
    }
}

int main(){

int size;
cout<<"Enter the size of Array"<<endl;
cin>>size;

int arr[size];
cout<<"Enter each element of the array"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}
int key;
cout<<"Enter the sum of Array"<<endl;
cin>>key;

pairSum(arr, size, key);

    return 0;
}