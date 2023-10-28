//find missing elements using binary search
#include<iostream>
#include<vector>
using namespace std;

//functions to find and print missing elements in a sorted array
void findMissingElements(vector<int>&arr){
    int n=arr.size();
    int left=0, right=n-1; 
    vector<int> missingElements;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]!=mid){
            //elements from 'left' to 'mid' are missing
            for(int i=left; i<mid; i++){
                missingElements.push_back(i);
            } 
            left=mid+1;
        }else{
            //elements from mid to right are not missing 
            left=mid+1;
        }
    }
    //handle missing elements at end of array
    for(int i=arr[n-1]+1; i<n; i++){
        missingElements.push_back(i);
    }
    if(missingElements.empty()){
        cout<<"No missing elements."<<endl;
    }else{
        cout<<"Missing Elements: ";
        for(int num: missingElements){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<int>sortedArray={0,1,2,3,5,6,9};
    cout<<"Sorted Array: ";
    for(int num: sortedArray){
        cout<<num<<" ";
    }
    cout<<endl;
    findMissingElements(sortedArray);
    return 0;
}