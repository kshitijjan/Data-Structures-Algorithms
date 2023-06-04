#include<iostream>
using namespace std;

class college{
public:
static string collegeName;

static string print(){
    return collegeName;
}

};

string college:: collegeName = "JUET";

int main(){

cout<<college::collegeName<<endl;
cout<<college::print()<<endl;
college C;
C.print();

    return 0;
}