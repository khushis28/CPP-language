// #include<iostream>
// using namespace std;
// int main(){
    //aray declaration
    // int arr[7];
    // cout<< arr<<endl;
    // //shows base address of array
    // cout<< &arr<<endl;

    //array initialization
    // int arr[4]= {1,2,3,4};

    // //gives error due to array elements limit exceed
    // int arr[5]= {1,2.3,4,5,6};
    // cout<< "Array Created Succesfully";
    
    //accessing elements by index
    // int arr[]={1,3,5,7,9};
    // cout<<arr[2]<<endl;


// //printing all values
//     int arr[]={1,3,5,7,9};
//     for(int i=0; i<5; i++){
//         cout<< arr[i]<< " ";
//     }
// }

//input from user
// int arr[5];
// cout<<"Enter array elements: " << endl;

// //taking input
// for(int i=0; i<5; i++){
//     cin>>arr[i];
// }

// //printing values given by user
// for(int i=0; i<5; i++){
//     cout<< arr[i];
// }


//printing doubles
// int arr[500];
// cout<< "How many numbers you want to add in array?" <<endl;
// int n;
// cin>>n;
// cout<<"Enter the numbers: "<<endl;
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<n; i++){
//     cout<< 2*arr[i]<<endl;
// }

// return 0;
// }


#include<iostream>
using namespace std;


void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
} 


void inc(int arr[], int size){
    arr[0]=arr[0]+10;
    printArray(arr,size);
}


int main(){
    int arr[]={5,6};
    int size=2;
    inc(arr,size);
    printArray(arr,size);
}