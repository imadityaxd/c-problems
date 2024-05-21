//program to display larger number
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout << "Enter two numbers:";
    cin >> x >> y;
    if(x >y){
        cout << x;
    }
    else{
        cout <<y;
    }
    return 0;
}