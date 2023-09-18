#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int sizea = 4;
    int brr[]={2,4,6,8};
    int sizeb = 4;

    vector<int> ans;
    //push all elements of vector arr
    for(int i=0; i<sizea;i++){
        ans.push_back(arr[i]);
    }

    //push all elements of vector brr
    for(int i=0; i<sizeb;i++){
        ans.push_back(brr[i]);
    }

    //print ans
    cout<< "Printing ans array: "<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i]<<" ";
    }
}