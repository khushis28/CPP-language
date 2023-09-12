#include<iostream>
using namespace std;
bool getEvenOddNum(int n);
int main(){
    int n;
    cin >> n;
    bool EvenNum = getEvenOddNum(n);
    if(EvenNum){
        cout << "It's an even number." << endl;
    }
    else{
        cout << "It's an odd number." << endl;
    }
}

bool getEvenOddNum(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
