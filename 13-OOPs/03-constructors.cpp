#include<iostream>
using namespace std;

class Cars{

string carName;
int price;
bool availability;


public:
Cars(string name, int cost, bool available){
    carName = name;
    price = cost;
    availability = available;
}
void display(){
    cout<<"Name of your car is: "<<carName<<endl;
    cout<<"Cost of your car is: "<<price<<endl;
    cout<<"Is your car available? 1 for Yes and 0 for No: "<<availability<<endl;
}

};

int main(){

Cars c1("Audi", 10000000, 1);
c1.display();

    return 0;
}