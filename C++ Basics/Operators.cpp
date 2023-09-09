#include<iostream>
using namespace std;
int main(){

    //arithmetic operators 
    // int a = 6;
    // int b = 2;
    // cout << a+b << endl;
    // cout << a-b << endl;
    // cout << a*b << endl;
    // cout << a%b << endl;
    // cout << a/b << endl;

    // //operators precedence
    // cout << (5)/(3) << endl;
    // cout << (5.0)/3 << endl;
    // cout << (5.0)/(3.0) << endl;
    // cout << (5)/(3.0) << endl;

    // //operator precedence as per type conversion 
    // cout << ((double)5)/(30) << endl;
    // cout << ((double)5)/((double)30)<< endl;
    // cout << ((double)5)/((float)30) << endl;
    // cout << (10)/((double)2) << endl;
    // cout << ((float)3)/((double)5)<< endl;
    
    // //relational operators
    // cout << (a>b) << endl;
    // cout << (a<b) << endl;
    // cout << (a<=b) << endl;
    // cout << (a>=b) << endl;
    // cout << (a==b) << endl;
    // cout << (a!=b) << endl;

    //logical operators
    int a = 6;
    int b = 2;
    cout << (a<=7 && b>=0) << endl;            //statement defines if both conditions are true; then result true
    cout << (a<=5 && b>=4) << endl;            
    cout << (a<=7 || b>=4) << endl;            //statement defines atleast 1 conditions to be true; then result true
    cout << (a<=7 || b>=0) << endl;
    cout << !(b<=0) << endl;                   //statement defines if conditions is false; then result true
    cout << !(b>=0) << endl;                   //statement defines if conditions is true; then result false
}