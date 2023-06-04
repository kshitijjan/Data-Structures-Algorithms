
#include<iostream>
using namespace std;

int main(){

int arr[10] = {2, 5, 6};
cout << arr <<endl;   //Address of first element
cout << &arr[0] <<  endl;  //Address of first element
cout << &arr <<endl;       //Address of First element
cout << arr[0]<<  endl;   //Value of first element
cout << *arr<<  endl;   /*  will dereference & it will give value present at that address */
cout << *arr + 1<<  endl; //first dereference and the add 1 in that number
cout << *(arr+1)<<  endl; //first it will go to the 1st index from 0 and then deference
cout << arr+1<<  endl;

cout << 2[arr] <<endl;  //This both are same
cout << arr[2] <<endl;

 

return 0;
}