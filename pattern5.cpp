// Program to Print a Full Pyramid Using *
#include <iostream>
#include <string>
using namespace std;

int main(){
    int num;
    cout << "Enter the number of rows you want to print: ";
    cin >> num;
    string space = " ";
    for(int i = 1; i <= num; i++){
        for(int s = 1; s <= num - i;s++){
            cout << " ";
        }
        int a = 1;
        int b = 1 + (i - 1) * 2;
        do{
            cout << "*";
            a++;
        }while(a <=b);
        
        cout << endl;


    }
    return 0;
}