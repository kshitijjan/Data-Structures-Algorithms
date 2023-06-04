#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct kshitij{
    string name;
    int age;
    int dob;

    // Creating a function inside struct to get the values in constructive way
    kshitij(string name_, int age_, int dob_){
        name = name_;
        age = age_;
        dob = dob_;
    }
};

int main(){
    //passing the values to the funtion through object
    kshitij ksh =  kshitij("Kshitij Jain", 19, 16012003);

    //getting output of the data members
    cout<<ksh.name<<endl;
    cout<<ksh.age<<endl;
    cout<<ksh.dob<<endl;


    return 0;
}