#include<iostream>
using namespace std;

int main(){

//Size

int arr[10] = {1,2,3,4,5};

cout<<sizeof(arr)<<endl;  //Total array size
cout<<sizeof(&arr)<<endl; //Size of address of first element of array

int *ptr = &arr[0];
cout<<sizeof(ptr)<<endl;  //ptr address size
cout<<sizeof(*ptr)<<endl;   //Size of value present at the address stored in ptr
cout<<sizeof(&ptr)<<endl;   //ptr address size


//Symbol Table

int a [10] = {1,2,3,4};

// a = a + 1; here we are trying to change address of a which is immpossible

cout<<&a[0]<<endl;
cout<<&a[1]<<endl;

int *p = a;
cout<<p<<endl;
p = p + 1;  // here we are changing the value present inside p, which is possible
cout<<p<<endl;

    return 0;
}
