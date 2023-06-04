#include<iostream>
using namespace std;

class Cars{   //Creating Class
private:
int mercedes, audi, bmw, porche;

public:

void getPrice();     //Initilizing funtions to access private data members
void putPrice();

};

void Cars :: getPrice(){   //Defining the funtionsa
    cin>>mercedes>>audi>>bmw>>porche;
}
void Cars :: putPrice(){
    cout<<"Cost of mercedes is "<<mercedes<<endl;
    cout<<"Cost of audi is "<<audi<<endl;
    cout<<"Cost of bmw is "<<bmw<<endl;
    cout<<"Cost of porche is "<<porche<<endl;
}

int main(){

Cars c;   //Creating the object
c.getPrice();  //Calling the function using object
c.putPrice();

    return 0;
}