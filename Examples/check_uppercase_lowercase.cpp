#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:";
    cin>> ch;

    if(ch >= 'a' && ch <= 'z')
    {
        cout<<"is a lowercase alphabet"<<endl;
    }
    else
    {
        cout<<"is a uppercase alphabet"<<endl;
    }
    return 0;
}