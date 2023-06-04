#include<iostream>
using namespace std;

class Objects{

public:
Objects(){
    cout<<"Constructor Called"<<endl;
}
~Objects(){
    cout<<"Destructor Called"<<endl;
}
};

int main(){

Objects ob;  //Destrcutor called automatically

Objects *ob2 = new Objects;
delete ob2;   //Destrcutor called manually



    return 0;
}