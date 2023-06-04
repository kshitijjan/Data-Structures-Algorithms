#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){

int size;
cout<<"Enter the size of Array"<<endl;
cin>>size;

int arr[size];
cout<<"Enter each element of array"<<endl;
for(int i=0; i<size; i++){
    cin>>arr[i];
}
int key;
cout<<"Enter the element you want to search for"<<endl;
cin>>key;

bool found = search (arr, size, key);

if (found){
    cout<<"The element is present"<<endl;
}
else{
    cout<<"The element is absent"<<endl;
}

    return 0;
}