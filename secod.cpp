//C++ program to convert celsius to fahreinheit
#include<iostream>
#include<conio.h>
using namespace std;


int main(){
    
    float celsius, fahrenheit;
    cout<<"Enter the Temperature in Celsius: ";
    cin>>celsius;
    fahrenheit = (celsius*1.8)+32;
    cout<<"\nEquivalent Temperature in Fahrenheit: "<<fahrenheit;
    cout<<endl;
    return 0;
    
}