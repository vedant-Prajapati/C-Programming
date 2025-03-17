// logical OR = ||
// T + T = T
// T + F = T
// F + T = F
// F + F = F


// logical AND = &&
// T + T = T
// T + F = F
// F + T = F
// F + F = F

// logical NOT = !

#include <iostream>
using namespace std;
int main()
{
    cout<< !(5 < 3) <<endl;
    cout<< ( (3 < 1) || (3 < 5) ) <<endl;
    cout<< ( (3 < 1) || (3 < 1) ) <<endl;

    cout<< ( (3 > 1) && (3 > 2) ) <<endl;
    cout<< ( (3 > 1) && (3 > 5) ) <<endl;

    return 0;
}