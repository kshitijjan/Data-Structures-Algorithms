#include<iostream>
using namespace std;
int main()
{
int i=0;
char s[50];
cout<<"Enter a String: ";
cin>>s;
char replacing;
cin>>replacing;
char replaced;
cin>>replaced;
while(s[i]!='\0'){
    if(s[i]==replacing){
        s[i]=replaced;
    }
    i++;
    }
cout<<s<<endl;
return 0;
}