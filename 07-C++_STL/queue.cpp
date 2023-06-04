#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){

//This is a first in first out data structure
// push
// front
// pop
// size
// empty

queue<int> q;
q.push(4);
q.push(6);
q.push(2);
q.push(7);

cout<< q.front() << endl;  //Prints 4
q.pop();  //Deletes 4
cout<< q.front() << endl;  //Prints 6
q.pop();  //Deletes 6

while(!q.empty()){      //As there is no specified clear funtion in queue we have to manualy delete it using loop
    q.pop();
}


//Time complexity is O(1)
//Time complexity of deletion is O(n), as we are manually deleting it using loop

    return 0;
}