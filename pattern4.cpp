// Program to Print Half-Pyramid Using Alphabets
#include <iostream>
using namespace std;

int main(){
    char input;
    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;
    char alpha = 'A';
    input = toupper(input);
    for(int i = 1; i <= (input - 'A' + 1); i++){
        for(int j = 1; j <= i; j++){
            cout << alpha << " ";
        }
        ++alpha;
        cout << endl;
    }
    return 0;
}