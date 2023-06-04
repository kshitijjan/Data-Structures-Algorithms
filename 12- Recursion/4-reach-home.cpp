#include<iostream>
using namespace std;

void reachHome(int src, int dest){
cout<<"Source " << src << " destinantion "<< dest<<endl;
    if(src == dest){
         
        cout<<"Reached Home"<<endl;
        return;
    }
    src++;
    reachHome(src, dest);
}

int main(){

int src = 0;
int dest = 10;

reachHome(src, dest);

    return 0;
}