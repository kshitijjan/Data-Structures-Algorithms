#include <iostream> 
#include<string.h>
using namespace std;
 
int main(){
string str;
getline(cin, str);
reverse(str.begin(), str.end());
cout << str << endl;
}