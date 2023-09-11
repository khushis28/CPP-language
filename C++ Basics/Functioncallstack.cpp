#include<iostream>
using namespace std;
void printa(int a);
void printb(int b);

int main(){
    int a = 5;
    printa(a);
    return 0;
}
void printa(int a){
    int b=3;
    cout << a << endl;
    printb(b);
}
void printb(int b){
    cout << b;
}
