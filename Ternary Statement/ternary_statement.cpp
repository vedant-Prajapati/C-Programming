//Ternary Statement
// condition ? expression1 : expression2;
//If the condition is true, the ternary statement returns expression1; otherwise, it returns expression2.

#include <iostream>
using namespace std;

int main(){
    int n = -45;
    cout<< (n>=0 ? "Positive" : "Negative") <<endl;
    return 0;
}