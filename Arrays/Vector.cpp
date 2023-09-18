#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr; 
    // number of elements present in vector
    cout<<arr.size()<<endl;
    //number of elements stored in vector
    cout<<arr.capacity()<<endl;
    return 0;
}


// taking input from user to enter elements in a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<< "Enter the value of n: "<<endl;
cin>>n;
vector<int> arr(n,1);
for(int i=0; i<arr.size();i++){
    cout<<arr[i]<< " "; 
}
cout<<endl;
}


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr; 

//insert elements
arr.push_back(5);
arr.push_back(6);

//to delete an element from vector
arr.pop_back();

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<< " ";
}
cout<<endl;
return 0;
}

// second method creating a vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"Printing brr: "<<endl;
    vector<int> brr{10,20,30,40};
    for(int i=0; i<brr.size(); i++){
        cout<< brr[i]<<" ";
    }
    cout<<endl;
    //if output is 0, then it's not empty
    cout<<"Vector brr is empty or not "<< brr.empty()<<endl;
}


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> crr;
    //if output is 1, then it's empty
    cout<<"Vector crr is empty or not "<< crr.empty()<<endl;
}



