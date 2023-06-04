#include <iostream>
using namespace std;

int gcdOfTwoNumbers(int x, int y)
{
    int ans = min(x, y); 
    while (ans > 0) {
        if (x % ans == 0 && y % ans == 0) {
            break;
        }
        ans--;
    }
    return ans; 
}

int main()
{
    int x,y;
    cin>>x>>y;
    cout<< gcdOfTwoNumbers(x, y)<<endl;
    return 0;
}