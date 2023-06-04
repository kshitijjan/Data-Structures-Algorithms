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
    cout<<carName<<endl;
    cout<<price<<endl;
    cout<<availibility<<endl;
}

int main(){

Cars *c1 = new Cars("Mercedes", 15000000, 1);
c1->display();

Cars *c2(c1);   //Alignment Copy Operator

c2->display();

    return 0;
}