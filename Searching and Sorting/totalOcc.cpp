#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{1,3,4,4,4,4,6,6,7};
    int target=4;
    int ans = upper_bound(v.begin(),v.end(),target)-lower_bound(v.begin(),v.end(),target); //O(log(n))
    cout<< "ans is "<< ans<<endl;
    return 0;
}