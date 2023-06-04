#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;

int main(){

/*-------------------------------------------------------------------------------------------------------------------*/
//Set only stores unique elements
//Finding unique elements in an array/vector using set, so if we have {1,2,2,3,4,5,5,6,7,8,8} and we have to find unique elements so
//ans would be {1,2,3,4,5,6,7,8}

set<int> st;
int size;
cout<<"Enter the size of set"<<endl;
cin>>size;

for(int i=0; i<size; i++){
    int x;
    cin>>x;
    st.insert(x);
}
for(auto it = st.begin(); it != st.end(); it++){
    cout<<*it<<" ";
}cout<<endl;

/*-------------------------------------------------------------------------------------------------------------------*/
//Erasing

//st.erase(st.begin(), st.begin() + 2);    //This will delete 1st and 2nd element of the set 
//st.erase(st.begin(), st.begin() + 4);    //This will delete 1st to 4th element of the set

st.erase(5); //This will erase this particular element from the set
st.erase(st.begin(), st.end());  //This will delete the entire set


/*-------------------------------------------------------------------------------------------------------------------*/

//Using array inside set for sorting 

set<int> se;
int arr[] = {12, 67, 34, 90, 65};
int size1;
cout<<"Enter the size "<<endl;
cin>>size1;

for(int i=0; i<size1; i++){
    se.insert(arr[i]);

}
for(auto it = se.begin(); it!=se.end(); it++){
    cout<<*it<< " ";
}cout<<endl;

       //OR

for(auto it : se){
    cout<< it <<" ";
}cout<<endl;


/*-------------------------------------------------------------------------------------------------------------------*/

//Copying one set to another set

set<int>a(st.begin(), st.end());

/*-------------------------------------------------------------------------------------------------------------------*/

//Find

auto find1 = se.find(67); //log n,    it will be iterator to 67
auto find1 = se.find(101); //log n,   this element is not present to find1 = st.end() 

/*-------------------------------------------------------------------------------------------------------------------*/

se.emplace(6);   //This is equivalent to st.insert() but emplace is faster than insert

/*-------------------------------------------------------------------------------------------------------------------*/

cout<<se.size()<<endl;    // To get the size of set

/*-------------------------------------------------------------------------------------------------------------------*/

unordered_set<int> st;  //This means that the elements of set can be in any order, it will be unique for sure but the arrangement can be in any order
st.insert(3);
st.insert(5);
st.insert(1);
st.insert(7);

//Best time complexity of unordered set -> O(1), whereras for set O(logn)
//Worst time complexity of unordered set -> O(set size)
//if tle happens then switch to set
//if there is no need for solution to be in ascending order then use unordered set

/*-------------------------------------------------------------------------------------------------------------------*/

multiset<int> ms;   //Multiset give us an option to store same element
ms.insert(1);
ms.insert(1);
ms.insert(2);
ms.insert(2);
ms.insert(3);
// Output will be -> {1,1,2,2,3};

st.count(1); //Finds how many times 1 occurs

ms.erase(2);    //All the instances will be erased

auto it = ms.find(2);  //returns an iterator pointing to the first element of 2

ms.clear();   //Delets the entire set
ms.erase(ms.begin(), ms.end());   //Deletes the entire set
ms.erase(ms.find(2));   //This will delete only one instance of 2, so first it will find first instance of 2 and then deletes it


// log n in size

/*-------------------------------------------------------------------------------------------------------------------*/

// All the function of set, unordered set, multiset is same, the only difference is:
// Set stores unique elements in ascending order
// unordered set stores unique elements in random order
// multiset stores multiple elements of same type in ascending order


    return 0;
}