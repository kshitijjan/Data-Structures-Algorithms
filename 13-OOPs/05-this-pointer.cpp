#include<iostream>
using namespace std;

class Cars{

string carName;
int price;
bool availibility;

public:

Cars(string, int, bool);
void display();

};

Cars::Cars(string carName, int price, bool availibility){
    this -> carName = carName;
    this -> price = price;
    this -> availibility = availibility;
    cout<<this<<endl;
}

void Cars::display(){
    cout<<carName<<endl;
    cout<<price<<endl;
    cout<<availibility<<endl;
}

int main(){

Cars *c1 = new Cars("Mercedes", 15000000, 1);
c1->display();

Cars *c2 = new Cars("Audi", 10000000, 0);
c1->display();


    return 0;
}