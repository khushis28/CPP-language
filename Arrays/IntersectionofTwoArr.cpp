#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4,5};
    vector<int>brr{1,2,6,9};
    vector<int>ans;

    //outer loop on arr vector
    for(int i=0; i<arr.size(); i++){
        //take out an 'element' from 'arr' vector
        int element=arr[i];

    //for every element, run loop on brr
    for(int j=0; j<brr.size(); j++){
        if(element==brr[j]){
            ans.push_back(element);
        }
    }
}

//printing ans
for(auto value: ans){
    cout<< value<< " ";
}
}