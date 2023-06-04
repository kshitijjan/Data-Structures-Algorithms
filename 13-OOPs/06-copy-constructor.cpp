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

Cars::Cars(string name, int cost, bool available){
    carName = name;
    price = cost;
    availibility = available;
}

void Cars::display(){
    cout<< this-> carName<<endl;
    cout<< this-> price<<endl;
    cout<< this-> availibility<<endl;
}

int main(){

Cars c1("Mercedes", 15000000, 1);
c1.display();

Cars c2(c1);   //Copy Constructor
c2.display();


    return 0;
}