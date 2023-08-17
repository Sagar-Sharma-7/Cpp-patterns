// Program to Print a Half-Pyramid Using *
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter your number: ";
    cin >> num;
    int i = 1;
    for(; i <= num; i++){
        int j = 1;
        for(;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}