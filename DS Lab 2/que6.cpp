#include <iostream>
#include <cmath>
using namespace std;

int convert(int n) {
int binary = 0; 
int rem, i = 1; 

while (n!=0) {
rem=n%2; 
n /= 2;
binary += rem * i; 
i *= 10;
}
return binary; 
}

int main() {
int num, binary;
cout << "Enter a decimal number: ";
cin >> num;
cout<<convert(num)<<endl;

return 0;
}
