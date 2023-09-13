#include<iostream>
using namespace std;
bool CheckPrime(int n);
int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin>>n;
    bool isPrime = CheckPrime(n);
    if(isPrime){
        cout << "It's a prime nmuber." << endl;
    }
    else{
        cout << "It's not a prime number." << endl;
    }
}

bool CheckPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}