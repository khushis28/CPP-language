#include<iostream>
using namespace std;
int main(){
    int val;
    cout << "Enter a value : " << endl;
    cin >> val;

    switch(val){
        case 1: cout << "Khushi";
        break;
        case 2: cout << "Abhishek";
        break;
        case 3: cout << "Mayank";
        break;
        case 4: cout << "Ankita";
        break;
        case 5: cout << "Anchal";
        break;
        case 6: cout << "Radhika";
        break;
        default: cout << "Prachi";
    }
}