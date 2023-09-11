//write a function to add two numbers

#include<iostream>
using namespace std;
int add(int num1, int num2);
int main(){
    int num1;
    cout << "Enter first number: " << endl;
    cin >> num1;
    int num2;
    cout << "Enter second number: " << endl;
    cin >> num2;
    int sum = add(num1,num2);
    cout << "Addition is : " << sum << endl;
    return 0;
}

int add(int num1, int num2){
    int result = num1+num2;
    return result;
}