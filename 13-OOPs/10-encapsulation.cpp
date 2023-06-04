#include<iostream>
using namespace std;

class Student{

private:
string name;
int age;
int dob;

public:

void getDetails(){
    cin>>this->name;
    cin>>this->age;
    cin>>this->dob;
}
void putDetails(){
    cout<<this->name<<endl;
    cout<<this-> age<<endl;
    cout<<this->dob<<endl;
}

};

int main(){

Student *S1 = new Student;
S1->getDetails();
S1->putDetails();


    return 0;
}