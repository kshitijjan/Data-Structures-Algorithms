#include <iostream>
#include <cmath>
using namespace std;

int convert(int n) {
int decimal = 0, i = 0, rem; 
while (n!=0) {
rem=n%10;
n /= 10;

decimal += rem * pow(2, i); 
++i;
}
return decimal; 
}

int main() {
int num;
cout << "Enter a binary number: ";
cin >> num;
cout << convert(num)<<endl; 

return 0;
}

