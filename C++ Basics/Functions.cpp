#include<iostream>
using namespace std;
void printName(){
    int n;
    cout << "Enter a value of n: " << endl;
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Khushi" << endl;
    }
}

int main(){
    //function call
    printName();
}