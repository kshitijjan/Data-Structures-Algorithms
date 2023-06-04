#include<iostream>
using namespace std;

class Hero{

    int health;

    public:
    int level;

    void getData(){
        cout<<"Enter the health of the hero: ";
        cin>>health;
    }
    void putData(){
        cout<<"The health of your hero is: "<<health<<endl;
    }
};

int main(){

Hero *kj = new Hero;
(*kj).level = 56;

kj->getData();
kj->putData();

cout<<"Level of your hero is "<<(*kj).level<<endl;

    return 0;
}