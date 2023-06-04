#include<iostream>
using namespace std;

void updateMemory(int *ptr){
    
    ptr = ptr + 1;  //If the address here was 100, then using +1 it will update to 101 which is different memory location
    cout << ptr << endl;
    cout << *ptr << endl; //Now this is at location 101 so it will print garbage value 
}

void updateValue(int *ptr){
    cout << *ptr << endl; //It will print value of valu
    *ptr = *ptr + 1;    //Here using *ptr we have updated value present at that location so it will change the value of value
    cout << *ptr <<endl; //It will print updated value
}

int main(){

int value = 5;
int *ptr = &value;

updateMemory(ptr);
updateValue(ptr);

cout << ptr << endl;
cout << *ptr << endl;
cout << value << endl;


    return 0;
}