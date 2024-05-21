#include <iostream>
using namespace std;
int main(){
    char first;
    cout << "Enter a character:";
    cin >> first;
    //Display ASCII value
    cout << "The ASCII value of '" << first<< "' is " << static_cast<int>(first);
    return 0;
}