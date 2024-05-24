/***C++ program to find area of Rectangle*/
#include <iostream>
using namespace std;
int main(){
    float length, breadth, area;
    cout << "Enter length and breadth of rectangle:";
    cin >> length >> breadth ;
    area = length * breadth;
    cout << "\nArea of the rectangle:"<< area;
    return 0;
}