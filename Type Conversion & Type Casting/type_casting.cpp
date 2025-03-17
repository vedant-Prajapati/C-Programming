// It is Explicit Type Conversion. Big To Small Data Type Conversion. It Is Also called Narrowing Conversion.

#include <iostream>
using namespace std;
int main()
{
    double price = 100.99; 
    int newPrice = (int)price;
    cout<<newPrice<<endl;

    return 0;
}