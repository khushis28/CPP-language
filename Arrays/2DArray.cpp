#include<iostream>
using namespace std;

// void printRowWiseSum(int arr[3][3], int rows, int cols){
//     //row-wise sum -> row-wise traversal
//     cout<<"printing row-wise sum"<<endl;
//     for(int i=0; i<rows; i++){
//         int sum=0;
//         for(int j=0; j<cols; j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }


void printColumnWiseSum(int arr[3][3], int rows, int cols){
    //column-wise sum-> column-wise traversal
    cout<<"printing column-wise sum"<<endl;
    for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main(){
    //declare 2D array
    // int arr[3][3];

    //initialization 
//     int brr[3][3]={{1,2,3},
//                    {4,5,6},
//                    {7,8,9}};

//     cout<< brr[2][1]<<endl;

//     //row-wise printing
//     //outer loop
//     for(int i=0; i<3; i++){
//         //for every row, we need to print value of each column
//         for(int j=0; j<3; j++){
//             cout<<brr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//column-wise printing
//outer loop
// for(int i=0; i<3; i++){
//         //for every column, we need to print value of each row
//         for(int j=0; j<3; j++){
//             cout<<brr[j][i]<<" ";
//         }
//         cout<<endl;
// }
// return 0;

// }


//row wise input
int arr[3][3];
int rows=3;
int cols=3;
// for(int i=0; i<rows; i++){
//     for(int j=0; j<cols; j++){
//         cin>>arr[i][j];
//     }
// }

// for(int i=0; i<rows; i++){
//     for(int j=0; j<cols; j++){
//         cout<<arr[i][j]<<" ";
//     }
    //    cout<<endl;
// printRowWiseSum(arr, rows, cols); 
// return 0;
// }


//column wise input
for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
        cin>>arr[j][i];
    }
}

cout<<"printing column wise"<<endl;
for(int i=0; i<rows;i++){
    for(int j=0;j<cols;j++){
        cout<<arr[i][j]<<" ";
    }
    // cout<<endl;
    printColumnWiseSum(arr, rows, cols);
// }
return 0;
}
}

