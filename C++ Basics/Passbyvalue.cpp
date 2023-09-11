#include<iostream>
using namespace std;
void print(int num);
int main(){
    int num=12;
    num++;
    ++num;
    print(num);
    --num;
    cout << num;
}

void print(int num){
    num++;
    ++num;
    cout << num << endl;
    --num;
}