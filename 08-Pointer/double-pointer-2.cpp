#include<iostream>
using namespace std;

void print(int **ptr){
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"**ptr = "<< **ptr <<endl;

    (**ptr)++;
    cout<<"**ptr = "<< **ptr <<endl;
}

void update(int **ptr2){
    // ptr2++;

    // *ptr2 = *ptr2 + 1;

    (**ptr2)++;

}

int main(){

int i=5;
int *p = &i;
int **p2 = &p;

print(p2);
cout<<"p2 = "<<p2<<endl;
cout<<"*p2 = "<<*p2<<endl;
cout<<"**p2 = "<< **p2 <<endl;

update(p2);
cout<<"p2 = "<<p2<<endl;
cout<<"*p2 = "<<*p2<<endl;
cout<<"**p2 = "<< **p2 <<endl;




    return 0;
}