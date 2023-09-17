 //for printing both; number of zeroes and number of ones
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,0,1,1,0,0,0};
    int size=9;
    int numZero=0;
    int numOne=0;
    for(int i=0; i<size;i++){
        if(arr[i]==0){
            numZero++;
        }
        else{
            numOne++;
        }
    }
    cout<<"Number of Ones are: "<<numOne<<endl;
    cout<<"Numbers of Zeroes are: "<<numZero<<endl;
}


//printing number of Ones
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,0,1,1,0,0,0};
    int size=9;
    int count=0;
    for(int i=0; i<size; i++){
        if(arr[i]==1){
            count++;
        }
    }
    cout<<count<<endl;
}