//A program to convert fahrenheit into Celsius
#include <iostream>
using namespace std;
 
// Function to convert Fahrenheit 
// to Celsius
float Conversion(float n)
{
    return (n - 32.0) * 5.0 / 9.0;
}
 
// Driver code
int main()
{
    float n;
    cout<< "Enter temperature in Fahrenheit:";
    cin >> n;
    cout << Conversion(n);
    return 0;
}