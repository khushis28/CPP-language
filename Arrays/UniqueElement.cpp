#include<iostream>
#include<vector>
using namespace std;
//calling function
int findUnique(vector<int> arr){
    // 0 is used to XOR an element, no effect by using 0; example: 0^1^2^1^3^2 will give 3 
    int ans=0;
    for(int i=0; i<arr.size(); i++) {
        ans = ans^arr[i];
    }
    return ans;
}

int main(){

    //input of size of array
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    //create vector on size of array taken as input
    vector<int> arr(n);
    cout<<"Enter elements: "<<endl;
    //taking input of elements 
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }

    //declaring function to find unique element
    int uniqueElement = findUnique(arr);
    cout<<"Unique Element is "<< uniqueElement << endl;
}