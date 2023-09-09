#include<iostream>
using namespace std;
int main(){
    //implicit type casting
    int a = 100.00;            
    cout << a << endl;

    //explicit type casting
    float n = 50.25;
    int x = (int)n; 
    cout << "value is:" << x << endl;
}