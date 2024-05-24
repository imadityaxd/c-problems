#include <iostream>
using namespace std;
int main() 
{
string str;
cout <<"Enter a string: ";
cin>>str;
int count = 0;
for(int i = 0;str[i];i++) // till the string character is null
    count++;
cout<<"The length of "<<str<<" is "<<count<<".";
}