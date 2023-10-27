//first occurence of an element in an array using binary search

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{1,3,4,4,4,4,6,7};
    int target=4;
    auto ans = lower_bound(v.begin(), v.end(), target);
    cout<< "ans is " << ans-v.begin() << endl;
    return 0;
}