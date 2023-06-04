#include <iostream>
using namespace std;
 
int main() {
 
char str1[100], str2[100];
char * s1 = str1;
char * s2 = str2;
 
cout<<"Enter 1st string: ";
cin>>str1;
cout<<"Enter 2nd string: ";
cin>>str2;
 
while(*(++s1));
 
while(*(s1++) = (*(s2++)));
cout<<str1;

return 0;
 
}