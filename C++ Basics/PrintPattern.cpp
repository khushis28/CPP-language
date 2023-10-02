
//taking input from user
#include<iostream>
using namespace std;

void printPat(int n){
    for(int i=n; i>0; i--){
        for(int j=n; j>0; j--){
            for(int k=0; k<i; k++){
                cout<<j<<" ";
            }
        }
        cout<<"$";
    }
    // cout<<endl;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    printPat(n);
    return 0;
}


//using hard-coded values
#include<iostream>
using namespace std;

void printPat(int n){
    for(int i=3; i>=1; i--){
        for(int j=3; j>=1; j--){
            for(int k=0; k<i; k++){
                cout<<j<<" ";
            }
        }
        cout<<"$";
    }
    // cout<<endl;
}

int main(){
    int n=3;
    printPat(n);
    return 0;
}