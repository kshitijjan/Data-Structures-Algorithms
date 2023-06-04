#include<iostream>
using namespace std;

void uniqueElement(int arr[], int n){

    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }
    cout<<ans<<endl;
}

int main(){

int n;
cout<<"Enter the size of Array"<<endl;
cin>>n;

int arr[n];
cout<<"Enter each element of first array"<<endl;
for(int i=0; i<n; i++){
    cin>>arr[i];
}
uniqueElement(arr, n);  


    return 0;
}