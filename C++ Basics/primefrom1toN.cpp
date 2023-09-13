//print all prime numbers from 1 to N

#include<iostream>
using namespace std;
bool CheckPrime(int n);
int main(){
    int n;
    cout<<"Enter a number: "<< endl;
    cin>>n;
    for(int i=2; i<=n; i++){
        bool isPrime = CheckPrime(i);
        if(isPrime){
            cout<< i << " ";
        }
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