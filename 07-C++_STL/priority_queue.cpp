#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std;


int main(){

//It arranges the element inside stack in descending order, in queue it was fifo and it arranges in the order as per the given input but in priority queue
//it will be fifo but it will arrange itself in descending order

//Functions we can use in priority queue are:
//push
//size
//top
//pop
//empty

priority_queue<int> pq;

pq.push(5);
pq.push(8);
pq.push(1);
pq.push(10);

cout<< pq.top() << endl;    //prints 10
pq.pop();   //Deletes 10
cout<< pq.top() << endl;    //prints 8
pq.pop();   //Deletes 8
cout<< pq.top() << endl;    //prints 5
pq.pop();   //Deletes 5
cout<< pq.top() << endl;    //prints 1


/*-------------------------------------------------------------------------------------------------------------------*/


priority_queue<pair<int,int>> pri;  //So this will make pair of priority queue and prints in descending order
pri.push(make_pair (1, 4));         //It will check the first element first if it is same then it will check the second element
pri.push(make_pair (1, 9));
pri.push(make_pair (1, 2));
pri.push(make_pair (1, 8));

cout<< pri.top().first << " " << pri.top().second <<endl;   //prints 1 9
pri.pop();  //Deletes 1 9
cout<< pri.top().first << " " << pri.top().second <<endl;   //prints 1 8
pri.pop();  //Deletes 1 8
cout<< pri.top().first << " " << pri.top().second <<endl;   //prints 1 4
pri.pop();  //deletes 1 4
cout<< pri.top().first << " " << pri.top().second <<endl;   //prints 1 2


/*-------------------------------------------------------------------------------------------------------------------*/

priority_queue<int> pq1;
pq1.push(-1);
pq1.push(-8);
pq1.push(-5);
pq1.push(-10);

//If we have minus sign then do nagation

cout<< -1 * pq1.top() <<  endl;
pq1.pop();
cout<< -1 * pq1.top() <<  endl;

/*---------------------------------------------------------OR-----------------------------------------------------*/
//minimum priority queue

priority_queue<int, vector<int>, greater<int>> pvg;
pvg.push(5);
pvg.push(8);
pvg.push(1);
pvg.push(10);

cout<<pvg.top()<<endl;


    return 0;
}