#include <iostream>
using namespace std;

int fact(int n){

if(n==0){
return 1;
}

int res = 1;
for (int i = 2; i <= n; i++){
res=res*i;
}
return res;
}
int nCr(int n, int r){

return fact(n) / (fact(r) * fact(n - r));
}

int main() {
int n,r;
cin>>n>>r;
cout << nCr(n, r)<<endl; 

return 0;
}