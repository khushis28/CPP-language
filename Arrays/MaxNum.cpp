#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,12,3,4,8,58,47,59};
    int size=8;
    int maxNum=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]>maxNum){
            maxNum=arr[i];
        }
    }
    cout<<maxNum<<endl;
}