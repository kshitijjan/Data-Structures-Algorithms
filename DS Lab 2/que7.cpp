#include<iostream>
using namespace std;

void lower(int arr[3][3], int row, int col){
int i, j;
for (i = 0; i < row; i++)
{
    for (j = 0; j < col; j++){
        if (i < j){
            cout << "0" << " ";
        }
        else{
            cout << arr[i][j] << " ";
        }
        }
        cout << endl;
    }
}
void upper(int arr[3][3], int row, int col){
int i, j;
for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        if (i > j){
            cout << "0" << " ";
        }
        else{
            cout << arr[i][j] << " ";
        }
        }
        cout << endl;
    }
}
 
int main(){
int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
int row = 3, col = 3;
     
cout << "Lower"<<endl;
lower(arr, row, col);
cout << "Upper"<<endl;
upper(arr, row, col);
         
    return 0;
}