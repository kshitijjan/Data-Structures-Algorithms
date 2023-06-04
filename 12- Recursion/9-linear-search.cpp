#include<iostream>
using namespace std;

bool linearSearch(int *arr, int size, int key){
    if(size == 0){
        return false;
    }
    if(key == arr[0]){
        return true;
            
    }
    else{
        bool ans = linearSearch(arr+1, size-1, key);
            return ans;
    }
}

int main(){

int arr[] = {1,2,3,4,5};

bool ans = linearSearch(arr, 5, 6);

(ans == true) ? cout<<"Yes Present" : cout<<"Not present ";


    return 0;
}