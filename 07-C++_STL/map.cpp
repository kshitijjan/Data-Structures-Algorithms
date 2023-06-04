#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){

//Key value
//Kshitij -> 65
//Juliet -> 76
//Kylie -> 85
//Joe -> 54

map<string, int> mpp;

mpp["Kshitij"] = 65;              //    | Joe, 54      |     //This will be the order in map
mpp["Juliet"] = 76;               //    | Juliet, 76   |
mpp["Kylie"] = 85;                //    | Kshitij, 65  |
mpp["Joe"] = 54;                  //    | Kylie, 85    |
                                  //    |______________|
                                  
mpp["Kshitij"] = 90;   //As Kshitij key is already present above so this new key will overwrite the above Kshitij Key
//mpp.emplace("Kshitij", 95);  //Same as above but quite faster

mpp["Kasy"] = 85;  //So we can have same values assigned to multiple keys

//So map stores in linearly increaseing order
//It is always sorted according to the keys
//Map only stores unique keys
//So in above example it will be sorted according to the name by alphabeticaly order
// log n is the time complexity of map

/*-------------------------------------------------------------------------------------------------------------------*/

mpp.count("Kshitij");  //Always returns 1 as it stores only 1 instance of particular key, i.e. Kshitij in this case

/*-------------------------------------------------------------------------------------------------------------------*/

//Printing map

for(auto it: mpp){
    cout<<it.first << " " << it.second <<endl;
}

for(auto it = mpp.begin(); it != mpp.end(); it++){
    cout<< it->first << " " << it->second << endl;       //If it is an iterator it can be accessed by arrow
}

/*-------------------------------------------------------------------------------------------------------------------*/

mpp.erase("Kylie");  //To erase in map only key is required

mpp.erase(mpp.begin()); //Deletes the first element
mpp.clear();   //Deletes the entire map
mpp.erase(mpp.begin(), mpp.end());  //This will also deletes the entire map

/*-------------------------------------------------------------------------------------------------------------------*/

auto it = mpp.find("Kshitij");  //Give the first occurance of Kshitij

/*-------------------------------------------------------------------------------------------------------------------*/

if(mpp.empty()){
    cout<< "Yes it is empty" <<endl;
}

/*-------------------------------------------------------------------------------------------------------------------*/

//Does not stores in any order
//unordered_map<int,int> mp;
// O(1) in almost all cases
// O(n) in the worst case, where n is the container size

multimap<string,int> mm;    //It can store multiple samae keys but it should have different values
mm.emplace("Kshitij", 5);    
mm.emplace("Kshitij", 7);
//Same keys but different values, so sorted and multiple keys

/*-------------------------------------------------------------------------------------------------------------------*/

//Pair Class

pair<int,int> pr = {1,2};
pair<pair<int,int>,int> prr = {{1,2},2};
cout<< prr.first.second <<endl;
pair<pair<int,int>, pair<int,int>> prrr = {{1,2}, {2,4}};
cout<< prrr.first.first;    //Prints 1
cout<< prrr.second.second;  //Prints 4

vector<pair<int,int>> vec;
set<pair<int,int>> st;
map<pair<int,int>, int> m;



    return 0;
}
