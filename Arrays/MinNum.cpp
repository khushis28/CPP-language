#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,12,3,4,8,58,47,59};
    int size=8;
    int minNum=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<minNum){
              minNum=arr[i];
        }
    }
    cout<<minNum<<endl;
}