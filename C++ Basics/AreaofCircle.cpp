#include<iostream>
using namespace std;
int main(){
    float radius;
    cout << "Enter radius : " << endl;
    cin >> radius;
    float area_circle = getAreaCircle(radius);
    cout << "Area of Circle is : " << area_circle << endl;
    return 0;
}
 
float getAreaCircle(float radius){
    float CircleArea = 3.14*radius*radius;
    return CircleArea;
}