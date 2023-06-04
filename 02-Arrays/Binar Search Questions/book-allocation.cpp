#include<iostream>
using namespace std;

bool isPossible(int arr[], int books, int students, int mid, int start, int end){
    int allocatedStudents = 1;
    int allocatedPages = 0;
    for(int i = 0; i<books; i++){
        if(arr[i] > mid){
            return false;
        }
        else if(allocatedPages + arr[i] > mid){
            allocatedStudents++;
            allocatedPages += arr[i];
        }
        else{
            allocatedPages += arr[i];
        }
    }
    if(allocatedStudents>students){
        return false;
    }
    else{
        return true;
    }
}


int main(){

int books = 4;
int students = 2;
int arr[] = {12,34,67,90};
int start = arr[0];
int end;
int ans;
int mid = (start+end)/2;
for(int i=0; i<books; i++){
    end += arr[i];
}
while(start<=end){
if(isPossible(arr,books, students, mid, start, end)){
    ans = mid;
    end = mid-1;
}
else{
    start = mid+1;
}
mid = (start+end)/2;
}
cout<<ans<<endl;
    return 0;
}