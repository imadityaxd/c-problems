//C++ programs to multiply two numbers without using *

#include <iostream>
using namespace std;
int main(){
    long op1, op2, product = 0;
 
    cout << "Enter the numbers: ";
    cin >> op1 >> op2;
    while(op2 > 0)
    {
        product = product + op1;
        op2--;
    }
    
    cout << endl << "The product of " << op1 << " and " << op2 << " is " << product;
    return 0;
}