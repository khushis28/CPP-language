#include<iostream>
using namespace std;
int Factorial(int n);
int main(){
    int n;
    cout << "Enter a number to find it's factorial: " << endl;
    cin >> n;
    int factNum = Factorial(n);
    cout << "Factorial of " << n << " is " << factNum << endl;
}

int Factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}