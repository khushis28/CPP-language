//Print sum of numbers upto N

#include<iostream>
using namespace std;
int getSum(int n);
int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    int ans = getSum(n);
    cout << "Sum Upto" << n << " is " << ans << endl;
    return 0;
}  

int getSum(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    return sum;
}