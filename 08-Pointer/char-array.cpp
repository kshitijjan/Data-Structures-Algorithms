#include<iostream>
using namespace std;

int main(){

int arr[10] = {1,2,3,4,5,56,6,78,9};
char crr[7] = "abcdef";

cout << arr << endl;    //Here it will print address of oth index
cout << crr << endl;    //Here it will print entire char array
cout << &crr << endl;   //Prints address of char array of index 0
cout << &crr[1] << endl;//Prints string from index 1

char *c = &crr[0];
cout << c << endl;      //This will also print the entire char array
cout<<&c<<endl;         //Prints Address of pointer
cout<<&c[0]<<endl;      //Prints string from index 0
cout<<&c[1]<<endl;      //Prints string from index 1
cout<<c[1]<<endl;       //Prints char of index 1 only
cout << *c << endl;     //This will prints only first char i.e. a

    return 0;
}