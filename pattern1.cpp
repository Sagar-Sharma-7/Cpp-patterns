#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter your number: ";
    cin >> num;

    int i = num;
    while(i >= 0){
        int j = 1;
        while(j <= i){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i--;
    }
    return 0;
}