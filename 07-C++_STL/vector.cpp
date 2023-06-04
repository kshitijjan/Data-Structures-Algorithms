#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){

vector<int> arr; //Initilisation of vector

cout<<arr.size()<<endl; //Prints 0

arr.push_back(2);
arr.push_back(4);
arr.push_back(5);

cout<<arr.size()<<endl; //Prints 3
for(int i=0; i< arr.size(); i++){
    cout<<arr[i]<<" ";
}cout<<endl;               

arr.pop_back();
cout<<arr.size()<<endl;     //Prints 2

arr.clear();       //This will clear the entire vector
for(int i=0; i< arr.size(); i++){       //Nothing will print as vector is already cleared
    cout<<arr[i]<<" ";     
}cout<<endl; 


vector<int> vec1(4, 0);        //This will create a vector of size 4 with all elements as 0 --> {0,0,0,0}
vector<int> vec2(5,6);         //This will create a vector of size 5 with all elements as 6 --> {6,6,6,6,6}
for(int i=0; i< vec1.size(); i++){       
    cout<<vec1[i]<<" ";
}cout<<endl; 

/*-------------------------------------------------------------------------------------------------------------------*/


//Copying an entire vector to another vector
vector<int> vec3(vec2.begin(), vec2.end());   //Method 1
vector<int> vec4(vec2);                      //Method 2


//Copying sub-vector of a vector to another vector

vector<int> vec5;
vec5.push_back(1);  
vec5.push_back(3);
vec5.push_back(5);   //vec5.emplace_back(5); This will work exect same way as push_back but lot of CPers use this because it takes less time than push_back
vec5.push_back(7);  //At this stage our vector will be {1,3,5,7};

//Now we want only {1,3}
vector<int> vec6(vec5.begin(), vec5.begin()+3);     //This will print 1,3  +2 is written because at that stage vector will terminate
            //Start iterator    //Terminator        //and gives all the values before it

/*-------------------------------------------------------------------------------------------------------------------*/

swap(vec1, vec2); //This will swap the two vectors or any other variables

/*-------------------------------------------------------------------------------------------------------------------*/

//Creating a 2D vector

vector<vector<int>> kshitij;       //We have created a vector inside a vector so vector in itself is a data type

vector<int> jain1;    
jain1.push_back(1);
jain1.push_back(2);

vector<int> jain2;
jain2.push_back(10);
jain2.push_back(20);

vector<int> jain3;
jain3.push_back(100);
jain3.push_back(200);
jain3.push_back(300);

kshitij.push_back(jain1);    //Now the 0th index of kshitij contains all the elements of jain1
kshitij.push_back(jain2);    // and 1st index of kshitij contains all elements of jain2
kshitij.push_back(jain3);    // and 2nd index of kshitij contains all elements of jain3

for(auto vctr: kshitij){
    for(auto it: vctr){
        cout<< it << " ";
    }
    cout<<endl;
}
/* Way to print vector, here auto means any data type, vctr and it is a variable name so vctr will manage entire vector (jain1, jain2) inside the vector and
it will manage each element of that vector like: vctr will go at jain1 and it will iterate like jain1[1], jain1[2], then vctr will go at jain2 and it will
iterate jain2[1], jain2[2] and in last vctr will go at jain3 and it will iterate jain3[1], jain3[2], jain3[3] */

cout<<kshitij[2][2]<<endl;   //Just like normal 2D array this will print 2nd element of 2nd index i.e. 300


vector<vector<int> > vec7(10, vector<int> (20,0));  //Defining 10 x 20 sized 2D vector
vec7.push_back(vector<int>(20, 0));  //As this is dynamic so we can add more elements beyond the intital limit, so this line added one more element of 20
                                     // sized vector, so now the size is 11
vec7[2].push_back(1);

vector<int> arr1[4];    //Created an array of size 4 with every element of the array as vector, so the whole array is static i.e. fixed sized (4) but every 
                       //element of that array is dynamic because it is a vector


// Creating a 3D array

vector<vector<vector<int> > > vec8(10, vector<vector<int> > (20, vector<int> (30,0)));  //Defining 10 x 20 x 30 sized 3D vector


/*-------------------------------------------------------------------------------------------------------------------*/



    return 0;
}